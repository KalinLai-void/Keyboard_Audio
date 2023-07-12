#pragma once

#include "SettingsForm.h"
#include "GlobalHooks.h"
#include "SoundSystem.h"

namespace KeyboardAudio
{

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RootForm
	/// </summary>
	public ref class RootForm : public System::Windows::Forms::Form
	{
	public:
		RootForm(void);

	protected:
		~RootForm();
	private: System::Windows::Forms::Button^ Enable_Btn;
	protected:


	protected:

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Enable_Btn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Enable_Btn
			// 
			this->Enable_Btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Enable_Btn->BackColor = System::Drawing::SystemColors::Control;
			this->Enable_Btn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enable_Btn->Location = System::Drawing::Point(12, 32);
			this->Enable_Btn->Name = L"Enable_Btn";
			this->Enable_Btn->Size = System::Drawing::Size(275, 115);
			this->Enable_Btn->TabIndex = 0;
			this->Enable_Btn->Text = L"Click to Enable";
			this->Enable_Btn->UseVisualStyleBackColor = false;
			this->Enable_Btn->Click += gcnew System::EventHandler(this, &RootForm::EnableBtn_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->settingsToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(299, 29);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(78, 25);
			this->settingsToolStripMenuItem->Text = L"Settings";
			this->settingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &RootForm::settingsToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(64, 25);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// RootForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(299, 159);
			this->Controls->Add(this->Enable_Btn);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"RootForm";
			this->Text = L"Keyboard Audio";
			this->Load += gcnew System::EventHandler(this, &RootForm::RootForm_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &RootForm::RootForm_VisibleChanged);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		GlobalHooks^ gHooks;
		Dictionary<String^, String^>^ keyToAudioDict;
		Dictionary<String^, String^>^ mouseToAudioDict;

		System::Void ReloadForm();

	private:
		bool isEnabled = false;
		SoundSystem* sound = new SoundSystem();

		// other forms
		SettingsForm^ settingForm;

		System::Void Hooks_KeyDown(System::Object^ sender, KeyEventArgs^ e);

	private: System::Void RootForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void EnableBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void settingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void RootForm_VisibleChanged(System::Object^ sender, System::EventArgs^ e);
};
};
