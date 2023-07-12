#pragma once

#include "GlobalHooks.h"

namespace KeyboardAudio {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Settings
	/// </summary>
	public ref class SettingsForm : public System::Windows::Forms::Form
	{
	public:
		SettingsForm(void);
		SettingsForm(Form^ form);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SettingsForm();

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ SelectedKeyLabel_label;
	protected:

	private: System::Windows::Forms::Button^ SelectAudio_Btn;
	private: System::Windows::Forms::Label^ AudioPath_Label;
	private: System::Windows::Forms::Label^ AudioPathLabel_label;

	private: System::Windows::Forms::Label^ KeyName_Label;
	private: System::Windows::Forms::Button^ Back_Btn;
	private: System::Windows::Forms::Button^ Save_Btn;
	private: System::Windows::Forms::Button^ ResetAll_Btn;
	private: System::Windows::Forms::Button^ Reset_Btn;


	private: System::Windows::Forms::GroupBox^ Btn_groupBox;





	private: System::Windows::Forms::Button^ VolUp_Key;
	private: System::Windows::Forms::Button^ VolDn_Key;
	private: System::Windows::Forms::Button^ VolMute_Key;
	private: System::Windows::Forms::Button^ Cal_Key;
	private: System::Windows::Forms::Button^ Enter2_Key;
	private: System::Windows::Forms::Button^ NumPadAdd_Key;
	private: System::Windows::Forms::Button^ NumPad0_Key;
	private: System::Windows::Forms::Button^ NumPadDot_Key;
	private: System::Windows::Forms::Button^ NumPad3_Key;
	private: System::Windows::Forms::Button^ NumPad2_Key;
	private: System::Windows::Forms::Button^ NumPad1_Key;
	private: System::Windows::Forms::Button^ NumPad6_Key;
	private: System::Windows::Forms::Button^ NumPad5_Key;
	private: System::Windows::Forms::Button^ NumPad4_Key;
	private: System::Windows::Forms::Button^ NumPad9_Key;
	private: System::Windows::Forms::Button^ NumPad8_Key;
	private: System::Windows::Forms::Button^ NumPad7_Key;
	private: System::Windows::Forms::Button^ NumPadSub_Key;
	private: System::Windows::Forms::Button^ NumPadMul_Key;
	private: System::Windows::Forms::Button^ NumPadSlash_Key;
	private: System::Windows::Forms::Button^ NumLock_Key;
	private: System::Windows::Forms::Button^ Right_Key;
	private: System::Windows::Forms::Button^ Down_Key;
	private: System::Windows::Forms::Button^ Left_Key;
	private: System::Windows::Forms::Button^ Up_Key;
	private: System::Windows::Forms::Button^ Pause_Key;
	private: System::Windows::Forms::Button^ ScrLk_Key;
	private: System::Windows::Forms::Button^ PrtSc_Key;
	private: System::Windows::Forms::Button^ PgDn_Key;
	private: System::Windows::Forms::Button^ PgUp_Key;
	private: System::Windows::Forms::Button^ End_Key;
	private: System::Windows::Forms::Button^ Home_Key;
	private: System::Windows::Forms::Button^ Del_Key;
	private: System::Windows::Forms::Button^ Insert_Key;
	private: System::Windows::Forms::Button^ F8_Key;
	private: System::Windows::Forms::Button^ F7_Key;
	private: System::Windows::Forms::Button^ F6_Key;
	private: System::Windows::Forms::Button^ F5_Key;
	private: System::Windows::Forms::Button^ F12_Key;
	private: System::Windows::Forms::Button^ F11_Key;
	private: System::Windows::Forms::Button^ F10_Key;
	private: System::Windows::Forms::Button^ F9_Key;
	private: System::Windows::Forms::Button^ F4_Key;
	private: System::Windows::Forms::Button^ F3_Key;
	private: System::Windows::Forms::Button^ F2_Key;
	private: System::Windows::Forms::Button^ F1_Key;
	private: System::Windows::Forms::Button^ Space_Key;
	private: System::Windows::Forms::Button^ RAlt_Key;
	private: System::Windows::Forms::Button^ FN_Key;
	private: System::Windows::Forms::Button^ RWin_Key;
	private: System::Windows::Forms::Button^ RCtrl_Key;
	private: System::Windows::Forms::Button^ RShift_Key;
	private: System::Windows::Forms::Button^ Enter_Key;
	private: System::Windows::Forms::Button^ BackSlash_Key;
	private: System::Windows::Forms::Button^ Back_Key;
	private: System::Windows::Forms::Button^ RBrackets_Key;
	private: System::Windows::Forms::Button^ Apostrophe_Key;
	private: System::Windows::Forms::Button^ LBrackets_Key;
	private: System::Windows::Forms::Button^ Slash_Key;
	private: System::Windows::Forms::Button^ Semicolon_Key;
	private: System::Windows::Forms::Button^ P_Key;
	private: System::Windows::Forms::Button^ Dot_Key;
	private: System::Windows::Forms::Button^ L_Key;
	private: System::Windows::Forms::Button^ O_Key;
	private: System::Windows::Forms::Button^ Comma_Key;
	private: System::Windows::Forms::Button^ K_Key;
	private: System::Windows::Forms::Button^ I_Key;
	private: System::Windows::Forms::Button^ M_Key;
	private: System::Windows::Forms::Button^ J_Key;
	private: System::Windows::Forms::Button^ U_Key;
	private: System::Windows::Forms::Button^ N_Key;
	private: System::Windows::Forms::Button^ H_Key;
	private: System::Windows::Forms::Button^ Y_Key;
	private: System::Windows::Forms::Button^ B_Key;
	private: System::Windows::Forms::Button^ G_Key;
	private: System::Windows::Forms::Button^ T_Key;
	private: System::Windows::Forms::Button^ V_Key;
	private: System::Windows::Forms::Button^ F_Key;
	private: System::Windows::Forms::Button^ R_Key;
	private: System::Windows::Forms::Button^ C_Key;
	private: System::Windows::Forms::Button^ D_Key;
	private: System::Windows::Forms::Button^ E_Key;
	private: System::Windows::Forms::Button^ X_Key;
	private: System::Windows::Forms::Button^ S_Key;
	private: System::Windows::Forms::Button^ W_Key;
	private: System::Windows::Forms::Button^ Z_Key;
	private: System::Windows::Forms::Button^ A_Key;
	private: System::Windows::Forms::Button^ Q_Key;
	private: System::Windows::Forms::Button^ Equal_Key;
	private: System::Windows::Forms::Button^ Underline_Key;
	private: System::Windows::Forms::Button^ N0_Key;
	private: System::Windows::Forms::Button^ N9_Key;
	private: System::Windows::Forms::Button^ N8_Key;
	private: System::Windows::Forms::Button^ N7_Key;
	private: System::Windows::Forms::Button^ N6_Key;
	private: System::Windows::Forms::Button^ N5_Key;
	private: System::Windows::Forms::Button^ N4_Key;
	private: System::Windows::Forms::Button^ N3_Key;
	private: System::Windows::Forms::Button^ N2_Key;
	private: System::Windows::Forms::Button^ N1_Key;
	private: System::Windows::Forms::Button^ LAlt_Key;
	private: System::Windows::Forms::Button^ LWin_Key;
	private: System::Windows::Forms::Button^ LCtrl_Key;
	private: System::Windows::Forms::Button^ LShift_Key;
	private: System::Windows::Forms::Button^ CapsLock__Key;
	private: System::Windows::Forms::Button^ Tab__Key;
	private: System::Windows::Forms::Button^ Tilde_Key;
	private: System::Windows::Forms::Button^ ESC_Key;
private: System::Windows::Forms::Label^ Description1_label;
private: System::Windows::Forms::Label^ Description2_label;
private: System::Windows::Forms::Label^ Description3_label;






private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ Annotation2_label;


private: System::Windows::Forms::Label^ Annotation1_label;


private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ languageToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ zhTWToolStripMenuItem;

private: System::Windows::Forms::ToolStripMenuItem^ englishToolStripMenuItem;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->SelectAudio_Btn = (gcnew System::Windows::Forms::Button());
			this->AudioPath_Label = (gcnew System::Windows::Forms::Label());
			this->AudioPathLabel_label = (gcnew System::Windows::Forms::Label());
			this->KeyName_Label = (gcnew System::Windows::Forms::Label());
			this->SelectedKeyLabel_label = (gcnew System::Windows::Forms::Label());
			this->Back_Btn = (gcnew System::Windows::Forms::Button());
			this->Save_Btn = (gcnew System::Windows::Forms::Button());
			this->ResetAll_Btn = (gcnew System::Windows::Forms::Button());
			this->Reset_Btn = (gcnew System::Windows::Forms::Button());
			this->Btn_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->VolUp_Key = (gcnew System::Windows::Forms::Button());
			this->VolDn_Key = (gcnew System::Windows::Forms::Button());
			this->VolMute_Key = (gcnew System::Windows::Forms::Button());
			this->Cal_Key = (gcnew System::Windows::Forms::Button());
			this->Enter2_Key = (gcnew System::Windows::Forms::Button());
			this->NumPadAdd_Key = (gcnew System::Windows::Forms::Button());
			this->NumPad0_Key = (gcnew System::Windows::Forms::Button());
			this->NumPadDot_Key = (gcnew System::Windows::Forms::Button());
			this->NumPad3_Key = (gcnew System::Windows::Forms::Button());
			this->NumPad2_Key = (gcnew System::Windows::Forms::Button());
			this->NumPad1_Key = (gcnew System::Windows::Forms::Button());
			this->NumPad6_Key = (gcnew System::Windows::Forms::Button());
			this->NumPad5_Key = (gcnew System::Windows::Forms::Button());
			this->NumPad4_Key = (gcnew System::Windows::Forms::Button());
			this->NumPad9_Key = (gcnew System::Windows::Forms::Button());
			this->NumPad8_Key = (gcnew System::Windows::Forms::Button());
			this->NumPad7_Key = (gcnew System::Windows::Forms::Button());
			this->NumPadSub_Key = (gcnew System::Windows::Forms::Button());
			this->NumPadMul_Key = (gcnew System::Windows::Forms::Button());
			this->NumPadSlash_Key = (gcnew System::Windows::Forms::Button());
			this->NumLock_Key = (gcnew System::Windows::Forms::Button());
			this->Right_Key = (gcnew System::Windows::Forms::Button());
			this->Down_Key = (gcnew System::Windows::Forms::Button());
			this->Left_Key = (gcnew System::Windows::Forms::Button());
			this->Up_Key = (gcnew System::Windows::Forms::Button());
			this->Pause_Key = (gcnew System::Windows::Forms::Button());
			this->ScrLk_Key = (gcnew System::Windows::Forms::Button());
			this->PrtSc_Key = (gcnew System::Windows::Forms::Button());
			this->PgDn_Key = (gcnew System::Windows::Forms::Button());
			this->PgUp_Key = (gcnew System::Windows::Forms::Button());
			this->End_Key = (gcnew System::Windows::Forms::Button());
			this->Home_Key = (gcnew System::Windows::Forms::Button());
			this->Del_Key = (gcnew System::Windows::Forms::Button());
			this->Insert_Key = (gcnew System::Windows::Forms::Button());
			this->F8_Key = (gcnew System::Windows::Forms::Button());
			this->F7_Key = (gcnew System::Windows::Forms::Button());
			this->F6_Key = (gcnew System::Windows::Forms::Button());
			this->F5_Key = (gcnew System::Windows::Forms::Button());
			this->F12_Key = (gcnew System::Windows::Forms::Button());
			this->F11_Key = (gcnew System::Windows::Forms::Button());
			this->F10_Key = (gcnew System::Windows::Forms::Button());
			this->F9_Key = (gcnew System::Windows::Forms::Button());
			this->F4_Key = (gcnew System::Windows::Forms::Button());
			this->F3_Key = (gcnew System::Windows::Forms::Button());
			this->F2_Key = (gcnew System::Windows::Forms::Button());
			this->F1_Key = (gcnew System::Windows::Forms::Button());
			this->Space_Key = (gcnew System::Windows::Forms::Button());
			this->RAlt_Key = (gcnew System::Windows::Forms::Button());
			this->FN_Key = (gcnew System::Windows::Forms::Button());
			this->RWin_Key = (gcnew System::Windows::Forms::Button());
			this->RCtrl_Key = (gcnew System::Windows::Forms::Button());
			this->RShift_Key = (gcnew System::Windows::Forms::Button());
			this->Enter_Key = (gcnew System::Windows::Forms::Button());
			this->BackSlash_Key = (gcnew System::Windows::Forms::Button());
			this->Back_Key = (gcnew System::Windows::Forms::Button());
			this->RBrackets_Key = (gcnew System::Windows::Forms::Button());
			this->Apostrophe_Key = (gcnew System::Windows::Forms::Button());
			this->LBrackets_Key = (gcnew System::Windows::Forms::Button());
			this->Slash_Key = (gcnew System::Windows::Forms::Button());
			this->Semicolon_Key = (gcnew System::Windows::Forms::Button());
			this->P_Key = (gcnew System::Windows::Forms::Button());
			this->Dot_Key = (gcnew System::Windows::Forms::Button());
			this->L_Key = (gcnew System::Windows::Forms::Button());
			this->O_Key = (gcnew System::Windows::Forms::Button());
			this->Comma_Key = (gcnew System::Windows::Forms::Button());
			this->K_Key = (gcnew System::Windows::Forms::Button());
			this->I_Key = (gcnew System::Windows::Forms::Button());
			this->M_Key = (gcnew System::Windows::Forms::Button());
			this->J_Key = (gcnew System::Windows::Forms::Button());
			this->U_Key = (gcnew System::Windows::Forms::Button());
			this->N_Key = (gcnew System::Windows::Forms::Button());
			this->H_Key = (gcnew System::Windows::Forms::Button());
			this->Y_Key = (gcnew System::Windows::Forms::Button());
			this->B_Key = (gcnew System::Windows::Forms::Button());
			this->G_Key = (gcnew System::Windows::Forms::Button());
			this->T_Key = (gcnew System::Windows::Forms::Button());
			this->V_Key = (gcnew System::Windows::Forms::Button());
			this->F_Key = (gcnew System::Windows::Forms::Button());
			this->R_Key = (gcnew System::Windows::Forms::Button());
			this->C_Key = (gcnew System::Windows::Forms::Button());
			this->D_Key = (gcnew System::Windows::Forms::Button());
			this->E_Key = (gcnew System::Windows::Forms::Button());
			this->X_Key = (gcnew System::Windows::Forms::Button());
			this->S_Key = (gcnew System::Windows::Forms::Button());
			this->W_Key = (gcnew System::Windows::Forms::Button());
			this->Z_Key = (gcnew System::Windows::Forms::Button());
			this->A_Key = (gcnew System::Windows::Forms::Button());
			this->Q_Key = (gcnew System::Windows::Forms::Button());
			this->Equal_Key = (gcnew System::Windows::Forms::Button());
			this->Underline_Key = (gcnew System::Windows::Forms::Button());
			this->N0_Key = (gcnew System::Windows::Forms::Button());
			this->N9_Key = (gcnew System::Windows::Forms::Button());
			this->N8_Key = (gcnew System::Windows::Forms::Button());
			this->N7_Key = (gcnew System::Windows::Forms::Button());
			this->N6_Key = (gcnew System::Windows::Forms::Button());
			this->N5_Key = (gcnew System::Windows::Forms::Button());
			this->N4_Key = (gcnew System::Windows::Forms::Button());
			this->N3_Key = (gcnew System::Windows::Forms::Button());
			this->N2_Key = (gcnew System::Windows::Forms::Button());
			this->N1_Key = (gcnew System::Windows::Forms::Button());
			this->LAlt_Key = (gcnew System::Windows::Forms::Button());
			this->LWin_Key = (gcnew System::Windows::Forms::Button());
			this->LCtrl_Key = (gcnew System::Windows::Forms::Button());
			this->LShift_Key = (gcnew System::Windows::Forms::Button());
			this->CapsLock__Key = (gcnew System::Windows::Forms::Button());
			this->Tab__Key = (gcnew System::Windows::Forms::Button());
			this->Tilde_Key = (gcnew System::Windows::Forms::Button());
			this->ESC_Key = (gcnew System::Windows::Forms::Button());
			this->Description1_label = (gcnew System::Windows::Forms::Label());
			this->Description2_label = (gcnew System::Windows::Forms::Label());
			this->Description3_label = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Annotation2_label = (gcnew System::Windows::Forms::Label());
			this->Annotation1_label = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->languageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zhTWToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			this->Btn_groupBox->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->SelectAudio_Btn);
			this->groupBox1->Controls->Add(this->AudioPath_Label);
			this->groupBox1->Controls->Add(this->AudioPathLabel_label);
			this->groupBox1->Controls->Add(this->KeyName_Label);
			this->groupBox1->Controls->Add(this->SelectedKeyLabel_label);
			this->groupBox1->Location = System::Drawing::Point(12, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(851, 123);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// SelectAudio_Btn
			// 
			this->SelectAudio_Btn->Enabled = false;
			this->SelectAudio_Btn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->SelectAudio_Btn->Location = System::Drawing::Point(11, 82);
			this->SelectAudio_Btn->Name = L"SelectAudio_Btn";
			this->SelectAudio_Btn->Size = System::Drawing::Size(151, 32);
			this->SelectAudio_Btn->TabIndex = 3;
			this->SelectAudio_Btn->Text = L"Select Audio";
			this->SelectAudio_Btn->UseVisualStyleBackColor = true;
			this->SelectAudio_Btn->Click += gcnew System::EventHandler(this, &SettingsForm::SelectAudio_Btn_Click);
			// 
			// AudioPath_Label
			// 
			this->AudioPath_Label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->AudioPath_Label->Location = System::Drawing::Point(168, 60);
			this->AudioPath_Label->Name = L"AudioPath_Label";
			this->AudioPath_Label->Size = System::Drawing::Size(677, 54);
			this->AudioPath_Label->TabIndex = 2;
			// 
			// AudioPathLabel_label
			// 
			this->AudioPathLabel_label->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AudioPathLabel_label->Location = System::Drawing::Point(6, 50);
			this->AudioPathLabel_label->Name = L"AudioPathLabel_label";
			this->AudioPathLabel_label->Size = System::Drawing::Size(156, 29);
			this->AudioPathLabel_label->TabIndex = 2;
			this->AudioPathLabel_label->Text = L"Audio Path:";
			this->AudioPathLabel_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// KeyName_Label
			// 
			this->KeyName_Label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->KeyName_Label->Location = System::Drawing::Point(168, 24);
			this->KeyName_Label->Name = L"KeyName_Label";
			this->KeyName_Label->Size = System::Drawing::Size(677, 23);
			this->KeyName_Label->TabIndex = 1;
			this->KeyName_Label->TextChanged += gcnew System::EventHandler(this, &SettingsForm::KeyName_Label_TextChanged);
			// 
			// SelectedKeyLabel_label
			// 
			this->SelectedKeyLabel_label->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SelectedKeyLabel_label->Location = System::Drawing::Point(6, 18);
			this->SelectedKeyLabel_label->Name = L"SelectedKeyLabel_label";
			this->SelectedKeyLabel_label->Size = System::Drawing::Size(156, 29);
			this->SelectedKeyLabel_label->TabIndex = 0;
			this->SelectedKeyLabel_label->Text = L"Selected Key:";
			this->SelectedKeyLabel_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Back_Btn
			// 
			this->Back_Btn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Back_Btn->Location = System::Drawing::Point(1064, 35);
			this->Back_Btn->Name = L"Back_Btn";
			this->Back_Btn->Size = System::Drawing::Size(189, 54);
			this->Back_Btn->TabIndex = 1;
			this->Back_Btn->Text = L"返回";
			this->Back_Btn->UseVisualStyleBackColor = true;
			this->Back_Btn->Click += gcnew System::EventHandler(this, &SettingsForm::Back_Btn_Click);
			// 
			// Save_Btn
			// 
			this->Save_Btn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Save_Btn->Location = System::Drawing::Point(1064, 97);
			this->Save_Btn->Name = L"Save_Btn";
			this->Save_Btn->Size = System::Drawing::Size(189, 54);
			this->Save_Btn->TabIndex = 2;
			this->Save_Btn->Text = L"儲存並返回";
			this->Save_Btn->UseVisualStyleBackColor = true;
			this->Save_Btn->Click += gcnew System::EventHandler(this, &SettingsForm::Save_Btn_Click);
			// 
			// ResetAll_Btn
			// 
			this->ResetAll_Btn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->ResetAll_Btn->Location = System::Drawing::Point(869, 35);
			this->ResetAll_Btn->Name = L"ResetAll_Btn";
			this->ResetAll_Btn->Size = System::Drawing::Size(189, 54);
			this->ResetAll_Btn->TabIndex = 3;
			this->ResetAll_Btn->Text = L"重設所有按鍵";
			this->ResetAll_Btn->UseVisualStyleBackColor = true;
			this->ResetAll_Btn->Click += gcnew System::EventHandler(this, &SettingsForm::ResetAll_Btn_Click);
			// 
			// Reset_Btn
			// 
			this->Reset_Btn->Enabled = false;
			this->Reset_Btn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Reset_Btn->Location = System::Drawing::Point(869, 95);
			this->Reset_Btn->Name = L"Reset_Btn";
			this->Reset_Btn->Size = System::Drawing::Size(189, 54);
			this->Reset_Btn->TabIndex = 4;
			this->Reset_Btn->Text = L"重設現選擇之按鍵";
			this->Reset_Btn->UseVisualStyleBackColor = true;
			this->Reset_Btn->Click += gcnew System::EventHandler(this, &SettingsForm::Reset_Btn_Click);
			// 
			// Btn_groupBox
			// 
			this->Btn_groupBox->Controls->Add(this->VolUp_Key);
			this->Btn_groupBox->Controls->Add(this->VolDn_Key);
			this->Btn_groupBox->Controls->Add(this->VolMute_Key);
			this->Btn_groupBox->Controls->Add(this->Cal_Key);
			this->Btn_groupBox->Controls->Add(this->Enter2_Key);
			this->Btn_groupBox->Controls->Add(this->NumPadAdd_Key);
			this->Btn_groupBox->Controls->Add(this->NumPad0_Key);
			this->Btn_groupBox->Controls->Add(this->NumPadDot_Key);
			this->Btn_groupBox->Controls->Add(this->NumPad3_Key);
			this->Btn_groupBox->Controls->Add(this->NumPad2_Key);
			this->Btn_groupBox->Controls->Add(this->NumPad1_Key);
			this->Btn_groupBox->Controls->Add(this->NumPad6_Key);
			this->Btn_groupBox->Controls->Add(this->NumPad5_Key);
			this->Btn_groupBox->Controls->Add(this->NumPad4_Key);
			this->Btn_groupBox->Controls->Add(this->NumPad9_Key);
			this->Btn_groupBox->Controls->Add(this->NumPad8_Key);
			this->Btn_groupBox->Controls->Add(this->NumPad7_Key);
			this->Btn_groupBox->Controls->Add(this->NumPadSub_Key);
			this->Btn_groupBox->Controls->Add(this->NumPadMul_Key);
			this->Btn_groupBox->Controls->Add(this->NumPadSlash_Key);
			this->Btn_groupBox->Controls->Add(this->NumLock_Key);
			this->Btn_groupBox->Controls->Add(this->Right_Key);
			this->Btn_groupBox->Controls->Add(this->Down_Key);
			this->Btn_groupBox->Controls->Add(this->Left_Key);
			this->Btn_groupBox->Controls->Add(this->Up_Key);
			this->Btn_groupBox->Controls->Add(this->Pause_Key);
			this->Btn_groupBox->Controls->Add(this->ScrLk_Key);
			this->Btn_groupBox->Controls->Add(this->PrtSc_Key);
			this->Btn_groupBox->Controls->Add(this->PgDn_Key);
			this->Btn_groupBox->Controls->Add(this->PgUp_Key);
			this->Btn_groupBox->Controls->Add(this->End_Key);
			this->Btn_groupBox->Controls->Add(this->Home_Key);
			this->Btn_groupBox->Controls->Add(this->Del_Key);
			this->Btn_groupBox->Controls->Add(this->Insert_Key);
			this->Btn_groupBox->Controls->Add(this->F8_Key);
			this->Btn_groupBox->Controls->Add(this->F7_Key);
			this->Btn_groupBox->Controls->Add(this->F6_Key);
			this->Btn_groupBox->Controls->Add(this->F5_Key);
			this->Btn_groupBox->Controls->Add(this->F12_Key);
			this->Btn_groupBox->Controls->Add(this->F11_Key);
			this->Btn_groupBox->Controls->Add(this->F10_Key);
			this->Btn_groupBox->Controls->Add(this->F9_Key);
			this->Btn_groupBox->Controls->Add(this->F4_Key);
			this->Btn_groupBox->Controls->Add(this->F3_Key);
			this->Btn_groupBox->Controls->Add(this->F2_Key);
			this->Btn_groupBox->Controls->Add(this->F1_Key);
			this->Btn_groupBox->Controls->Add(this->Space_Key);
			this->Btn_groupBox->Controls->Add(this->RAlt_Key);
			this->Btn_groupBox->Controls->Add(this->FN_Key);
			this->Btn_groupBox->Controls->Add(this->RWin_Key);
			this->Btn_groupBox->Controls->Add(this->RCtrl_Key);
			this->Btn_groupBox->Controls->Add(this->RShift_Key);
			this->Btn_groupBox->Controls->Add(this->Enter_Key);
			this->Btn_groupBox->Controls->Add(this->BackSlash_Key);
			this->Btn_groupBox->Controls->Add(this->Back_Key);
			this->Btn_groupBox->Controls->Add(this->RBrackets_Key);
			this->Btn_groupBox->Controls->Add(this->Apostrophe_Key);
			this->Btn_groupBox->Controls->Add(this->LBrackets_Key);
			this->Btn_groupBox->Controls->Add(this->Slash_Key);
			this->Btn_groupBox->Controls->Add(this->Semicolon_Key);
			this->Btn_groupBox->Controls->Add(this->P_Key);
			this->Btn_groupBox->Controls->Add(this->Dot_Key);
			this->Btn_groupBox->Controls->Add(this->L_Key);
			this->Btn_groupBox->Controls->Add(this->O_Key);
			this->Btn_groupBox->Controls->Add(this->Comma_Key);
			this->Btn_groupBox->Controls->Add(this->K_Key);
			this->Btn_groupBox->Controls->Add(this->I_Key);
			this->Btn_groupBox->Controls->Add(this->M_Key);
			this->Btn_groupBox->Controls->Add(this->J_Key);
			this->Btn_groupBox->Controls->Add(this->U_Key);
			this->Btn_groupBox->Controls->Add(this->N_Key);
			this->Btn_groupBox->Controls->Add(this->H_Key);
			this->Btn_groupBox->Controls->Add(this->Y_Key);
			this->Btn_groupBox->Controls->Add(this->B_Key);
			this->Btn_groupBox->Controls->Add(this->G_Key);
			this->Btn_groupBox->Controls->Add(this->T_Key);
			this->Btn_groupBox->Controls->Add(this->V_Key);
			this->Btn_groupBox->Controls->Add(this->F_Key);
			this->Btn_groupBox->Controls->Add(this->R_Key);
			this->Btn_groupBox->Controls->Add(this->C_Key);
			this->Btn_groupBox->Controls->Add(this->D_Key);
			this->Btn_groupBox->Controls->Add(this->E_Key);
			this->Btn_groupBox->Controls->Add(this->X_Key);
			this->Btn_groupBox->Controls->Add(this->S_Key);
			this->Btn_groupBox->Controls->Add(this->W_Key);
			this->Btn_groupBox->Controls->Add(this->Z_Key);
			this->Btn_groupBox->Controls->Add(this->A_Key);
			this->Btn_groupBox->Controls->Add(this->Q_Key);
			this->Btn_groupBox->Controls->Add(this->Equal_Key);
			this->Btn_groupBox->Controls->Add(this->Underline_Key);
			this->Btn_groupBox->Controls->Add(this->N0_Key);
			this->Btn_groupBox->Controls->Add(this->N9_Key);
			this->Btn_groupBox->Controls->Add(this->N8_Key);
			this->Btn_groupBox->Controls->Add(this->N7_Key);
			this->Btn_groupBox->Controls->Add(this->N6_Key);
			this->Btn_groupBox->Controls->Add(this->N5_Key);
			this->Btn_groupBox->Controls->Add(this->N4_Key);
			this->Btn_groupBox->Controls->Add(this->N3_Key);
			this->Btn_groupBox->Controls->Add(this->N2_Key);
			this->Btn_groupBox->Controls->Add(this->N1_Key);
			this->Btn_groupBox->Controls->Add(this->LAlt_Key);
			this->Btn_groupBox->Controls->Add(this->LWin_Key);
			this->Btn_groupBox->Controls->Add(this->LCtrl_Key);
			this->Btn_groupBox->Controls->Add(this->LShift_Key);
			this->Btn_groupBox->Controls->Add(this->CapsLock__Key);
			this->Btn_groupBox->Controls->Add(this->Tab__Key);
			this->Btn_groupBox->Controls->Add(this->Tilde_Key);
			this->Btn_groupBox->Controls->Add(this->ESC_Key);
			this->Btn_groupBox->Location = System::Drawing::Point(12, 157);
			this->Btn_groupBox->Name = L"Btn_groupBox";
			this->Btn_groupBox->Size = System::Drawing::Size(1241, 369);
			this->Btn_groupBox->TabIndex = 5;
			this->Btn_groupBox->TabStop = false;
			// 
			// VolUp_Key
			// 
			this->VolUp_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->VolUp_Key->Location = System::Drawing::Point(1184, 21);
			this->VolUp_Key->Name = L"VolUp_Key";
			this->VolUp_Key->Size = System::Drawing::Size(50, 50);
			this->VolUp_Key->TabIndex = 220;
			this->VolUp_Key->Tag = L"VolumeUp";
			this->VolUp_Key->Text = L"Volume Up";
			this->VolUp_Key->UseVisualStyleBackColor = true;
			// 
			// VolDn_Key
			// 
			this->VolDn_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->VolDn_Key->Location = System::Drawing::Point(1128, 21);
			this->VolDn_Key->Name = L"VolDn_Key";
			this->VolDn_Key->Size = System::Drawing::Size(50, 50);
			this->VolDn_Key->TabIndex = 219;
			this->VolDn_Key->Tag = L"VolumeDown";
			this->VolDn_Key->Text = L"Volume Down";
			this->VolDn_Key->UseVisualStyleBackColor = true;
			// 
			// VolMute_Key
			// 
			this->VolMute_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->VolMute_Key->Location = System::Drawing::Point(1072, 21);
			this->VolMute_Key->Name = L"VolMute_Key";
			this->VolMute_Key->Size = System::Drawing::Size(50, 50);
			this->VolMute_Key->TabIndex = 218;
			this->VolMute_Key->Tag = L"VolumeMute";
			this->VolMute_Key->Text = L"Volume Mute";
			this->VolMute_Key->UseVisualStyleBackColor = true;
			// 
			// Cal_Key
			// 
			this->Cal_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Cal_Key->Location = System::Drawing::Point(1016, 21);
			this->Cal_Key->Name = L"Cal_Key";
			this->Cal_Key->Size = System::Drawing::Size(50, 50);
			this->Cal_Key->TabIndex = 217;
			this->Cal_Key->Tag = L"LaunchApplication2";
			this->Cal_Key->Text = L"Cal";
			this->Cal_Key->UseVisualStyleBackColor = true;
			// 
			// Enter2_Key
			// 
			this->Enter2_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Enter2_Key->Location = System::Drawing::Point(1184, 250);
			this->Enter2_Key->Name = L"Enter2_Key";
			this->Enter2_Key->Size = System::Drawing::Size(50, 106);
			this->Enter2_Key->TabIndex = 216;
			this->Enter2_Key->Tag = L"Return";
			this->Enter2_Key->Text = L"Enter";
			this->Enter2_Key->UseVisualStyleBackColor = true;
			// 
			// NumPadAdd_Key
			// 
			this->NumPadAdd_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumPadAdd_Key->Location = System::Drawing::Point(1184, 138);
			this->NumPadAdd_Key->Name = L"NumPadAdd_Key";
			this->NumPadAdd_Key->Size = System::Drawing::Size(50, 106);
			this->NumPadAdd_Key->TabIndex = 215;
			this->NumPadAdd_Key->Tag = L"Add";
			this->NumPadAdd_Key->Text = L"+";
			this->NumPadAdd_Key->UseVisualStyleBackColor = true;
			// 
			// NumPad0_Key
			// 
			this->NumPad0_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumPad0_Key->Location = System::Drawing::Point(1016, 306);
			this->NumPad0_Key->Name = L"NumPad0_Key";
			this->NumPad0_Key->Size = System::Drawing::Size(106, 50);
			this->NumPad0_Key->TabIndex = 214;
			this->NumPad0_Key->Tag = L"NumPad0";
			this->NumPad0_Key->Text = L"0";
			this->NumPad0_Key->UseVisualStyleBackColor = true;
			// 
			// NumPadDot_Key
			// 
			this->NumPadDot_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumPadDot_Key->Location = System::Drawing::Point(1128, 306);
			this->NumPadDot_Key->Name = L"NumPadDot_Key";
			this->NumPadDot_Key->Size = System::Drawing::Size(50, 50);
			this->NumPadDot_Key->TabIndex = 213;
			this->NumPadDot_Key->Tag = L"Decimal";
			this->NumPadDot_Key->Text = L".";
			this->NumPadDot_Key->UseVisualStyleBackColor = true;
			// 
			// NumPad3_Key
			// 
			this->NumPad3_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumPad3_Key->Location = System::Drawing::Point(1128, 250);
			this->NumPad3_Key->Name = L"NumPad3_Key";
			this->NumPad3_Key->Size = System::Drawing::Size(50, 50);
			this->NumPad3_Key->TabIndex = 212;
			this->NumPad3_Key->Tag = L"NumPad3";
			this->NumPad3_Key->Text = L"3";
			this->NumPad3_Key->UseVisualStyleBackColor = true;
			// 
			// NumPad2_Key
			// 
			this->NumPad2_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumPad2_Key->Location = System::Drawing::Point(1072, 250);
			this->NumPad2_Key->Name = L"NumPad2_Key";
			this->NumPad2_Key->Size = System::Drawing::Size(50, 50);
			this->NumPad2_Key->TabIndex = 211;
			this->NumPad2_Key->Tag = L"NumPad2";
			this->NumPad2_Key->Text = L"2";
			this->NumPad2_Key->UseVisualStyleBackColor = true;
			// 
			// NumPad1_Key
			// 
			this->NumPad1_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumPad1_Key->Location = System::Drawing::Point(1016, 250);
			this->NumPad1_Key->Name = L"NumPad1_Key";
			this->NumPad1_Key->Size = System::Drawing::Size(50, 50);
			this->NumPad1_Key->TabIndex = 210;
			this->NumPad1_Key->Tag = L"NumPad1";
			this->NumPad1_Key->Text = L"1";
			this->NumPad1_Key->UseVisualStyleBackColor = true;
			// 
			// NumPad6_Key
			// 
			this->NumPad6_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumPad6_Key->Location = System::Drawing::Point(1128, 194);
			this->NumPad6_Key->Name = L"NumPad6_Key";
			this->NumPad6_Key->Size = System::Drawing::Size(50, 50);
			this->NumPad6_Key->TabIndex = 209;
			this->NumPad6_Key->Tag = L"NumPad6";
			this->NumPad6_Key->Text = L"6";
			this->NumPad6_Key->UseVisualStyleBackColor = true;
			// 
			// NumPad5_Key
			// 
			this->NumPad5_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumPad5_Key->Location = System::Drawing::Point(1072, 194);
			this->NumPad5_Key->Name = L"NumPad5_Key";
			this->NumPad5_Key->Size = System::Drawing::Size(50, 50);
			this->NumPad5_Key->TabIndex = 208;
			this->NumPad5_Key->Tag = L"NumPad5";
			this->NumPad5_Key->Text = L"5";
			this->NumPad5_Key->UseVisualStyleBackColor = true;
			// 
			// NumPad4_Key
			// 
			this->NumPad4_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumPad4_Key->Location = System::Drawing::Point(1016, 194);
			this->NumPad4_Key->Name = L"NumPad4_Key";
			this->NumPad4_Key->Size = System::Drawing::Size(50, 50);
			this->NumPad4_Key->TabIndex = 207;
			this->NumPad4_Key->Tag = L"NumPad4";
			this->NumPad4_Key->Text = L"4";
			this->NumPad4_Key->UseVisualStyleBackColor = true;
			// 
			// NumPad9_Key
			// 
			this->NumPad9_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumPad9_Key->Location = System::Drawing::Point(1128, 138);
			this->NumPad9_Key->Name = L"NumPad9_Key";
			this->NumPad9_Key->Size = System::Drawing::Size(50, 50);
			this->NumPad9_Key->TabIndex = 206;
			this->NumPad9_Key->Tag = L"NumPad9";
			this->NumPad9_Key->Text = L"9";
			this->NumPad9_Key->UseVisualStyleBackColor = true;
			// 
			// NumPad8_Key
			// 
			this->NumPad8_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumPad8_Key->Location = System::Drawing::Point(1072, 138);
			this->NumPad8_Key->Name = L"NumPad8_Key";
			this->NumPad8_Key->Size = System::Drawing::Size(50, 50);
			this->NumPad8_Key->TabIndex = 205;
			this->NumPad8_Key->Tag = L"NumPad8";
			this->NumPad8_Key->Text = L"8";
			this->NumPad8_Key->UseVisualStyleBackColor = true;
			// 
			// NumPad7_Key
			// 
			this->NumPad7_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumPad7_Key->Location = System::Drawing::Point(1016, 138);
			this->NumPad7_Key->Name = L"NumPad7_Key";
			this->NumPad7_Key->Size = System::Drawing::Size(50, 50);
			this->NumPad7_Key->TabIndex = 204;
			this->NumPad7_Key->Tag = L"NumPad7";
			this->NumPad7_Key->Text = L"7";
			this->NumPad7_Key->UseVisualStyleBackColor = true;
			// 
			// NumPadSub_Key
			// 
			this->NumPadSub_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumPadSub_Key->Location = System::Drawing::Point(1184, 82);
			this->NumPadSub_Key->Name = L"NumPadSub_Key";
			this->NumPadSub_Key->Size = System::Drawing::Size(50, 50);
			this->NumPadSub_Key->TabIndex = 203;
			this->NumPadSub_Key->Tag = L"Subtract";
			this->NumPadSub_Key->Text = L"-";
			this->NumPadSub_Key->UseVisualStyleBackColor = true;
			// 
			// NumPadMul_Key
			// 
			this->NumPadMul_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumPadMul_Key->Location = System::Drawing::Point(1128, 82);
			this->NumPadMul_Key->Name = L"NumPadMul_Key";
			this->NumPadMul_Key->Size = System::Drawing::Size(50, 50);
			this->NumPadMul_Key->TabIndex = 202;
			this->NumPadMul_Key->Tag = L"Multiply";
			this->NumPadMul_Key->Text = L"*";
			this->NumPadMul_Key->UseVisualStyleBackColor = true;
			// 
			// NumPadSlash_Key
			// 
			this->NumPadSlash_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumPadSlash_Key->Location = System::Drawing::Point(1072, 82);
			this->NumPadSlash_Key->Name = L"NumPadSlash_Key";
			this->NumPadSlash_Key->Size = System::Drawing::Size(50, 50);
			this->NumPadSlash_Key->TabIndex = 201;
			this->NumPadSlash_Key->Tag = L"Divide";
			this->NumPadSlash_Key->Text = L"/";
			this->NumPadSlash_Key->UseVisualStyleBackColor = true;
			// 
			// NumLock_Key
			// 
			this->NumLock_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NumLock_Key->Location = System::Drawing::Point(1016, 82);
			this->NumLock_Key->Name = L"NumLock_Key";
			this->NumLock_Key->Size = System::Drawing::Size(50, 50);
			this->NumLock_Key->TabIndex = 200;
			this->NumLock_Key->Tag = L"NumLock";
			this->NumLock_Key->Text = L"Num Lock";
			this->NumLock_Key->UseVisualStyleBackColor = true;
			// 
			// Right_Key
			// 
			this->Right_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Right_Key->Location = System::Drawing::Point(955, 306);
			this->Right_Key->Name = L"Right_Key";
			this->Right_Key->Size = System::Drawing::Size(50, 50);
			this->Right_Key->TabIndex = 199;
			this->Right_Key->Tag = L"Right";
			this->Right_Key->Text = L"→";
			this->Right_Key->UseVisualStyleBackColor = true;
			// 
			// Down_Key
			// 
			this->Down_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Down_Key->Location = System::Drawing::Point(899, 306);
			this->Down_Key->Name = L"Down_Key";
			this->Down_Key->Size = System::Drawing::Size(50, 50);
			this->Down_Key->TabIndex = 198;
			this->Down_Key->Tag = L"Down";
			this->Down_Key->Text = L"↓";
			this->Down_Key->UseVisualStyleBackColor = true;
			// 
			// Left_Key
			// 
			this->Left_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Left_Key->Location = System::Drawing::Point(843, 306);
			this->Left_Key->Name = L"Left_Key";
			this->Left_Key->Size = System::Drawing::Size(50, 50);
			this->Left_Key->TabIndex = 197;
			this->Left_Key->Tag = L"Left";
			this->Left_Key->Text = L"←";
			this->Left_Key->UseVisualStyleBackColor = true;
			// 
			// Up_Key
			// 
			this->Up_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Up_Key->Location = System::Drawing::Point(899, 250);
			this->Up_Key->Name = L"Up_Key";
			this->Up_Key->Size = System::Drawing::Size(50, 50);
			this->Up_Key->TabIndex = 196;
			this->Up_Key->Tag = L"Up";
			this->Up_Key->Text = L"↑";
			this->Up_Key->UseVisualStyleBackColor = true;
			// 
			// Pause_Key
			// 
			this->Pause_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Pause_Key->Location = System::Drawing::Point(955, 21);
			this->Pause_Key->Name = L"Pause_Key";
			this->Pause_Key->Size = System::Drawing::Size(50, 50);
			this->Pause_Key->TabIndex = 195;
			this->Pause_Key->Tag = L"Pause";
			this->Pause_Key->Text = L"Pause";
			this->Pause_Key->UseVisualStyleBackColor = true;
			// 
			// ScrLk_Key
			// 
			this->ScrLk_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->ScrLk_Key->Location = System::Drawing::Point(899, 21);
			this->ScrLk_Key->Name = L"ScrLk_Key";
			this->ScrLk_Key->Size = System::Drawing::Size(50, 50);
			this->ScrLk_Key->TabIndex = 194;
			this->ScrLk_Key->Tag = L"Scroll";
			this->ScrLk_Key->Text = L"Scroll Lock";
			this->ScrLk_Key->UseVisualStyleBackColor = true;
			// 
			// PrtSc_Key
			// 
			this->PrtSc_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->PrtSc_Key->Location = System::Drawing::Point(843, 21);
			this->PrtSc_Key->Name = L"PrtSc_Key";
			this->PrtSc_Key->Size = System::Drawing::Size(50, 50);
			this->PrtSc_Key->TabIndex = 193;
			this->PrtSc_Key->Tag = L"PrintScreen";
			this->PrtSc_Key->Text = L"Print Screen";
			this->PrtSc_Key->UseVisualStyleBackColor = true;
			// 
			// PgDn_Key
			// 
			this->PgDn_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->PgDn_Key->Location = System::Drawing::Point(955, 138);
			this->PgDn_Key->Name = L"PgDn_Key";
			this->PgDn_Key->Size = System::Drawing::Size(50, 50);
			this->PgDn_Key->TabIndex = 192;
			this->PgDn_Key->Tag = L"Next";
			this->PgDn_Key->Text = L"Page Down";
			this->PgDn_Key->UseVisualStyleBackColor = true;
			// 
			// PgUp_Key
			// 
			this->PgUp_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->PgUp_Key->Location = System::Drawing::Point(955, 82);
			this->PgUp_Key->Name = L"PgUp_Key";
			this->PgUp_Key->Size = System::Drawing::Size(50, 50);
			this->PgUp_Key->TabIndex = 191;
			this->PgUp_Key->Tag = L"PageUp";
			this->PgUp_Key->Text = L"Page Up";
			this->PgUp_Key->UseVisualStyleBackColor = true;
			// 
			// End_Key
			// 
			this->End_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->End_Key->Location = System::Drawing::Point(899, 138);
			this->End_Key->Name = L"End_Key";
			this->End_Key->Size = System::Drawing::Size(50, 50);
			this->End_Key->TabIndex = 190;
			this->End_Key->Tag = L"End";
			this->End_Key->Text = L"End";
			this->End_Key->UseVisualStyleBackColor = true;
			// 
			// Home_Key
			// 
			this->Home_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Home_Key->Location = System::Drawing::Point(899, 82);
			this->Home_Key->Name = L"Home_Key";
			this->Home_Key->Size = System::Drawing::Size(50, 50);
			this->Home_Key->TabIndex = 189;
			this->Home_Key->Tag = L"Home";
			this->Home_Key->Text = L"Home";
			this->Home_Key->UseVisualStyleBackColor = true;
			// 
			// Del_Key
			// 
			this->Del_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Del_Key->Location = System::Drawing::Point(843, 138);
			this->Del_Key->Name = L"Del_Key";
			this->Del_Key->Size = System::Drawing::Size(50, 50);
			this->Del_Key->TabIndex = 188;
			this->Del_Key->Tag = L"Delete";
			this->Del_Key->Text = L"Delete";
			this->Del_Key->UseVisualStyleBackColor = true;
			// 
			// Insert_Key
			// 
			this->Insert_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Insert_Key->Location = System::Drawing::Point(843, 82);
			this->Insert_Key->Name = L"Insert_Key";
			this->Insert_Key->Size = System::Drawing::Size(50, 50);
			this->Insert_Key->TabIndex = 187;
			this->Insert_Key->Tag = L"Insert";
			this->Insert_Key->Text = L"Insert";
			this->Insert_Key->UseVisualStyleBackColor = true;
			// 
			// F8_Key
			// 
			this->F8_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->F8_Key->Location = System::Drawing::Point(535, 21);
			this->F8_Key->Name = L"F8_Key";
			this->F8_Key->Size = System::Drawing::Size(50, 50);
			this->F8_Key->TabIndex = 186;
			this->F8_Key->Tag = L"F8";
			this->F8_Key->Text = L"F8";
			this->F8_Key->UseVisualStyleBackColor = true;
			// 
			// F7_Key
			// 
			this->F7_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->F7_Key->Location = System::Drawing::Point(479, 21);
			this->F7_Key->Name = L"F7_Key";
			this->F7_Key->Size = System::Drawing::Size(50, 50);
			this->F7_Key->TabIndex = 185;
			this->F7_Key->Tag = L"F7";
			this->F7_Key->Text = L"F7";
			this->F7_Key->UseVisualStyleBackColor = true;
			// 
			// F6_Key
			// 
			this->F6_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->F6_Key->Location = System::Drawing::Point(423, 21);
			this->F6_Key->Name = L"F6_Key";
			this->F6_Key->Size = System::Drawing::Size(50, 50);
			this->F6_Key->TabIndex = 184;
			this->F6_Key->Tag = L"F6";
			this->F6_Key->Text = L"F6";
			this->F6_Key->UseVisualStyleBackColor = true;
			// 
			// F5_Key
			// 
			this->F5_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->F5_Key->Location = System::Drawing::Point(367, 21);
			this->F5_Key->Name = L"F5_Key";
			this->F5_Key->Size = System::Drawing::Size(50, 50);
			this->F5_Key->TabIndex = 183;
			this->F5_Key->Tag = L"F5";
			this->F5_Key->Text = L"F5";
			this->F5_Key->UseVisualStyleBackColor = true;
			// 
			// F12_Key
			// 
			this->F12_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->F12_Key->Location = System::Drawing::Point(782, 21);
			this->F12_Key->Name = L"F12_Key";
			this->F12_Key->Size = System::Drawing::Size(50, 50);
			this->F12_Key->TabIndex = 182;
			this->F12_Key->Tag = L"F12";
			this->F12_Key->Text = L"F12";
			this->F12_Key->UseVisualStyleBackColor = true;
			// 
			// F11_Key
			// 
			this->F11_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->F11_Key->Location = System::Drawing::Point(726, 21);
			this->F11_Key->Name = L"F11_Key";
			this->F11_Key->Size = System::Drawing::Size(50, 50);
			this->F11_Key->TabIndex = 181;
			this->F11_Key->Tag = L"F11";
			this->F11_Key->Text = L"F11";
			this->F11_Key->UseVisualStyleBackColor = true;
			// 
			// F10_Key
			// 
			this->F10_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->F10_Key->Location = System::Drawing::Point(670, 21);
			this->F10_Key->Name = L"F10_Key";
			this->F10_Key->Size = System::Drawing::Size(50, 50);
			this->F10_Key->TabIndex = 180;
			this->F10_Key->Tag = L"F10";
			this->F10_Key->Text = L"F10";
			this->F10_Key->UseVisualStyleBackColor = true;
			// 
			// F9_Key
			// 
			this->F9_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->F9_Key->Location = System::Drawing::Point(614, 21);
			this->F9_Key->Name = L"F9_Key";
			this->F9_Key->Size = System::Drawing::Size(50, 50);
			this->F9_Key->TabIndex = 179;
			this->F9_Key->Tag = L"F9";
			this->F9_Key->Text = L"F9";
			this->F9_Key->UseVisualStyleBackColor = true;
			// 
			// F4_Key
			// 
			this->F4_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->F4_Key->Location = System::Drawing::Point(286, 21);
			this->F4_Key->Name = L"F4_Key";
			this->F4_Key->Size = System::Drawing::Size(50, 50);
			this->F4_Key->TabIndex = 178;
			this->F4_Key->Tag = L"F4";
			this->F4_Key->Text = L"F4";
			this->F4_Key->UseVisualStyleBackColor = true;
			// 
			// F3_Key
			// 
			this->F3_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->F3_Key->Location = System::Drawing::Point(230, 21);
			this->F3_Key->Name = L"F3_Key";
			this->F3_Key->Size = System::Drawing::Size(50, 50);
			this->F3_Key->TabIndex = 177;
			this->F3_Key->Tag = L"F3";
			this->F3_Key->Text = L"F3";
			this->F3_Key->UseVisualStyleBackColor = true;
			// 
			// F2_Key
			// 
			this->F2_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->F2_Key->Location = System::Drawing::Point(174, 21);
			this->F2_Key->Name = L"F2_Key";
			this->F2_Key->Size = System::Drawing::Size(50, 50);
			this->F2_Key->TabIndex = 176;
			this->F2_Key->Tag = L"F2";
			this->F2_Key->Text = L"F2";
			this->F2_Key->UseVisualStyleBackColor = true;
			// 
			// F1_Key
			// 
			this->F1_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->F1_Key->Location = System::Drawing::Point(118, 21);
			this->F1_Key->Name = L"F1_Key";
			this->F1_Key->Size = System::Drawing::Size(50, 50);
			this->F1_Key->TabIndex = 175;
			this->F1_Key->Tag = L"F1";
			this->F1_Key->Text = L"F1";
			this->F1_Key->UseVisualStyleBackColor = true;
			// 
			// Space_Key
			// 
			this->Space_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Space_Key->Location = System::Drawing::Point(189, 306);
			this->Space_Key->Name = L"Space_Key";
			this->Space_Key->Size = System::Drawing::Size(401, 50);
			this->Space_Key->TabIndex = 174;
			this->Space_Key->Tag = L"Space";
			this->Space_Key->Text = L"Space";
			this->Space_Key->UseVisualStyleBackColor = true;
			// 
			// RAlt_Key
			// 
			this->RAlt_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->RAlt_Key->Location = System::Drawing::Point(596, 306);
			this->RAlt_Key->Name = L"RAlt_Key";
			this->RAlt_Key->Size = System::Drawing::Size(55, 50);
			this->RAlt_Key->TabIndex = 173;
			this->RAlt_Key->Tag = L"RMenu";
			this->RAlt_Key->Text = L"RAlt";
			this->RAlt_Key->UseVisualStyleBackColor = true;
			// 
			// FN_Key
			// 
			this->FN_Key->Enabled = false;
			this->FN_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->FN_Key->Location = System::Drawing::Point(716, 306);
			this->FN_Key->Name = L"FN_Key";
			this->FN_Key->Size = System::Drawing::Size(55, 50);
			this->FN_Key->TabIndex = 172;
			this->FN_Key->Text = L"Fn / RB";
			this->FN_Key->UseVisualStyleBackColor = true;
			// 
			// RWin_Key
			// 
			this->RWin_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->RWin_Key->Location = System::Drawing::Point(657, 306);
			this->RWin_Key->Name = L"RWin_Key";
			this->RWin_Key->Size = System::Drawing::Size(55, 50);
			this->RWin_Key->TabIndex = 171;
			this->RWin_Key->Tag = L"RWin";
			this->RWin_Key->Text = L"RWin";
			this->RWin_Key->UseVisualStyleBackColor = true;
			// 
			// RCtrl_Key
			// 
			this->RCtrl_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->RCtrl_Key->Location = System::Drawing::Point(777, 306);
			this->RCtrl_Key->Name = L"RCtrl_Key";
			this->RCtrl_Key->Size = System::Drawing::Size(55, 50);
			this->RCtrl_Key->TabIndex = 170;
			this->RCtrl_Key->Tag = L"RControlKey";
			this->RCtrl_Key->Text = L"RCtrl";
			this->RCtrl_Key->UseVisualStyleBackColor = true;
			// 
			// RShift_Key
			// 
			this->RShift_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->RShift_Key->Location = System::Drawing::Point(672, 250);
			this->RShift_Key->Name = L"RShift_Key";
			this->RShift_Key->Size = System::Drawing::Size(160, 50);
			this->RShift_Key->TabIndex = 169;
			this->RShift_Key->Tag = L"RShiftKey";
			this->RShift_Key->Text = L"RShift";
			this->RShift_Key->UseVisualStyleBackColor = true;
			// 
			// Enter_Key
			// 
			this->Enter_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Enter_Key->Location = System::Drawing::Point(713, 194);
			this->Enter_Key->Name = L"Enter_Key";
			this->Enter_Key->Size = System::Drawing::Size(120, 50);
			this->Enter_Key->TabIndex = 168;
			this->Enter_Key->Tag = L"Return";
			this->Enter_Key->Text = L"Enter";
			this->Enter_Key->UseVisualStyleBackColor = true;
			// 
			// BackSlash_Key
			// 
			this->BackSlash_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->BackSlash_Key->Location = System::Drawing::Point(759, 138);
			this->BackSlash_Key->Name = L"BackSlash_Key";
			this->BackSlash_Key->Size = System::Drawing::Size(75, 50);
			this->BackSlash_Key->TabIndex = 167;
			this->BackSlash_Key->Tag = L"Oem5";
			this->BackSlash_Key->Text = L"\\ |";
			this->BackSlash_Key->UseVisualStyleBackColor = true;
			// 
			// Back_Key
			// 
			this->Back_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Back_Key->Location = System::Drawing::Point(734, 82);
			this->Back_Key->Name = L"Back_Key";
			this->Back_Key->Size = System::Drawing::Size(100, 50);
			this->Back_Key->TabIndex = 166;
			this->Back_Key->Tag = L"Back";
			this->Back_Key->Text = L"Back Space";
			this->Back_Key->UseVisualStyleBackColor = true;
			// 
			// RBrackets_Key
			// 
			this->RBrackets_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->RBrackets_Key->Location = System::Drawing::Point(703, 138);
			this->RBrackets_Key->Name = L"RBrackets_Key";
			this->RBrackets_Key->Size = System::Drawing::Size(50, 50);
			this->RBrackets_Key->TabIndex = 165;
			this->RBrackets_Key->Tag = L"Oem6";
			this->RBrackets_Key->Text = L"] }";
			this->RBrackets_Key->UseVisualStyleBackColor = true;
			// 
			// Apostrophe_Key
			// 
			this->Apostrophe_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Apostrophe_Key->Location = System::Drawing::Point(657, 194);
			this->Apostrophe_Key->Name = L"Apostrophe_Key";
			this->Apostrophe_Key->Size = System::Drawing::Size(50, 50);
			this->Apostrophe_Key->TabIndex = 164;
			this->Apostrophe_Key->Tag = L"Oem7";
			this->Apostrophe_Key->Text = L"\' \"";
			this->Apostrophe_Key->UseVisualStyleBackColor = true;
			// 
			// LBrackets_Key
			// 
			this->LBrackets_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->LBrackets_Key->Location = System::Drawing::Point(647, 138);
			this->LBrackets_Key->Name = L"LBrackets_Key";
			this->LBrackets_Key->Size = System::Drawing::Size(50, 50);
			this->LBrackets_Key->TabIndex = 163;
			this->LBrackets_Key->Tag = L"OemOpenBrackets";
			this->LBrackets_Key->Text = L"[ {";
			this->LBrackets_Key->UseVisualStyleBackColor = true;
			// 
			// Slash_Key
			// 
			this->Slash_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Slash_Key->Location = System::Drawing::Point(616, 250);
			this->Slash_Key->Name = L"Slash_Key";
			this->Slash_Key->Size = System::Drawing::Size(50, 50);
			this->Slash_Key->TabIndex = 162;
			this->Slash_Key->Tag = L"OemQuestion";
			this->Slash_Key->Text = L"/ \?";
			this->Slash_Key->UseVisualStyleBackColor = true;
			// 
			// Semicolon_Key
			// 
			this->Semicolon_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Semicolon_Key->Location = System::Drawing::Point(601, 194);
			this->Semicolon_Key->Name = L"Semicolon_Key";
			this->Semicolon_Key->Size = System::Drawing::Size(50, 50);
			this->Semicolon_Key->TabIndex = 161;
			this->Semicolon_Key->Tag = L"Oem1";
			this->Semicolon_Key->Text = L"; :";
			this->Semicolon_Key->UseVisualStyleBackColor = true;
			// 
			// P_Key
			// 
			this->P_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->P_Key->Location = System::Drawing::Point(591, 138);
			this->P_Key->Name = L"P_Key";
			this->P_Key->Size = System::Drawing::Size(50, 50);
			this->P_Key->TabIndex = 160;
			this->P_Key->Tag = L"P";
			this->P_Key->Text = L"P";
			this->P_Key->UseVisualStyleBackColor = true;
			// 
			// Dot_Key
			// 
			this->Dot_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Dot_Key->Location = System::Drawing::Point(560, 250);
			this->Dot_Key->Name = L"Dot_Key";
			this->Dot_Key->Size = System::Drawing::Size(50, 50);
			this->Dot_Key->TabIndex = 159;
			this->Dot_Key->Tag = L"OemPeriod";
			this->Dot_Key->Text = L". >";
			this->Dot_Key->UseVisualStyleBackColor = true;
			// 
			// L_Key
			// 
			this->L_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->L_Key->Location = System::Drawing::Point(545, 194);
			this->L_Key->Name = L"L_Key";
			this->L_Key->Size = System::Drawing::Size(50, 50);
			this->L_Key->TabIndex = 158;
			this->L_Key->Tag = L"L";
			this->L_Key->Text = L"L";
			this->L_Key->UseVisualStyleBackColor = true;
			// 
			// O_Key
			// 
			this->O_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->O_Key->Location = System::Drawing::Point(535, 138);
			this->O_Key->Name = L"O_Key";
			this->O_Key->Size = System::Drawing::Size(50, 50);
			this->O_Key->TabIndex = 157;
			this->O_Key->Tag = L"O";
			this->O_Key->Text = L"O";
			this->O_Key->UseVisualStyleBackColor = true;
			// 
			// Comma_Key
			// 
			this->Comma_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Comma_Key->Location = System::Drawing::Point(504, 250);
			this->Comma_Key->Name = L"Comma_Key";
			this->Comma_Key->Size = System::Drawing::Size(50, 50);
			this->Comma_Key->TabIndex = 156;
			this->Comma_Key->Tag = L"Oemcomma";
			this->Comma_Key->Text = L", <";
			this->Comma_Key->UseVisualStyleBackColor = true;
			// 
			// K_Key
			// 
			this->K_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->K_Key->Location = System::Drawing::Point(489, 194);
			this->K_Key->Name = L"K_Key";
			this->K_Key->Size = System::Drawing::Size(50, 50);
			this->K_Key->TabIndex = 155;
			this->K_Key->Tag = L"K";
			this->K_Key->Text = L"K";
			this->K_Key->UseVisualStyleBackColor = true;
			// 
			// I_Key
			// 
			this->I_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->I_Key->Location = System::Drawing::Point(479, 138);
			this->I_Key->Name = L"I_Key";
			this->I_Key->Size = System::Drawing::Size(50, 50);
			this->I_Key->TabIndex = 154;
			this->I_Key->Tag = L"I";
			this->I_Key->Text = L"I";
			this->I_Key->UseVisualStyleBackColor = true;
			// 
			// M_Key
			// 
			this->M_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->M_Key->Location = System::Drawing::Point(448, 250);
			this->M_Key->Name = L"M_Key";
			this->M_Key->Size = System::Drawing::Size(50, 50);
			this->M_Key->TabIndex = 153;
			this->M_Key->Tag = L"M";
			this->M_Key->Text = L"M";
			this->M_Key->UseVisualStyleBackColor = true;
			// 
			// J_Key
			// 
			this->J_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->J_Key->Location = System::Drawing::Point(433, 194);
			this->J_Key->Name = L"J_Key";
			this->J_Key->Size = System::Drawing::Size(50, 50);
			this->J_Key->TabIndex = 152;
			this->J_Key->Tag = L"J";
			this->J_Key->Text = L"J";
			this->J_Key->UseVisualStyleBackColor = true;
			// 
			// U_Key
			// 
			this->U_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->U_Key->Location = System::Drawing::Point(423, 138);
			this->U_Key->Name = L"U_Key";
			this->U_Key->Size = System::Drawing::Size(50, 50);
			this->U_Key->TabIndex = 151;
			this->U_Key->Tag = L"U";
			this->U_Key->Text = L"U";
			this->U_Key->UseVisualStyleBackColor = true;
			// 
			// N_Key
			// 
			this->N_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->N_Key->Location = System::Drawing::Point(392, 250);
			this->N_Key->Name = L"N_Key";
			this->N_Key->Size = System::Drawing::Size(50, 50);
			this->N_Key->TabIndex = 150;
			this->N_Key->Tag = L"N";
			this->N_Key->Text = L"N";
			this->N_Key->UseVisualStyleBackColor = true;
			// 
			// H_Key
			// 
			this->H_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->H_Key->Location = System::Drawing::Point(377, 194);
			this->H_Key->Name = L"H_Key";
			this->H_Key->Size = System::Drawing::Size(50, 50);
			this->H_Key->TabIndex = 149;
			this->H_Key->Tag = L"H";
			this->H_Key->Text = L"H";
			this->H_Key->UseVisualStyleBackColor = true;
			// 
			// Y_Key
			// 
			this->Y_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Y_Key->Location = System::Drawing::Point(367, 138);
			this->Y_Key->Name = L"Y_Key";
			this->Y_Key->Size = System::Drawing::Size(50, 50);
			this->Y_Key->TabIndex = 148;
			this->Y_Key->Tag = L"Y";
			this->Y_Key->Text = L"Y";
			this->Y_Key->UseVisualStyleBackColor = true;
			// 
			// B_Key
			// 
			this->B_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->B_Key->Location = System::Drawing::Point(336, 250);
			this->B_Key->Name = L"B_Key";
			this->B_Key->Size = System::Drawing::Size(50, 50);
			this->B_Key->TabIndex = 147;
			this->B_Key->Tag = L"B";
			this->B_Key->Text = L"B";
			this->B_Key->UseVisualStyleBackColor = true;
			// 
			// G_Key
			// 
			this->G_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->G_Key->Location = System::Drawing::Point(321, 194);
			this->G_Key->Name = L"G_Key";
			this->G_Key->Size = System::Drawing::Size(50, 50);
			this->G_Key->TabIndex = 146;
			this->G_Key->Tag = L"G";
			this->G_Key->Text = L"G";
			this->G_Key->UseVisualStyleBackColor = true;
			// 
			// T_Key
			// 
			this->T_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->T_Key->Location = System::Drawing::Point(311, 138);
			this->T_Key->Name = L"T_Key";
			this->T_Key->Size = System::Drawing::Size(50, 50);
			this->T_Key->TabIndex = 145;
			this->T_Key->Tag = L"T";
			this->T_Key->Text = L"T";
			this->T_Key->UseVisualStyleBackColor = true;
			// 
			// V_Key
			// 
			this->V_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->V_Key->Location = System::Drawing::Point(280, 250);
			this->V_Key->Name = L"V_Key";
			this->V_Key->Size = System::Drawing::Size(50, 50);
			this->V_Key->TabIndex = 144;
			this->V_Key->Tag = L"V";
			this->V_Key->Text = L"V";
			this->V_Key->UseVisualStyleBackColor = true;
			// 
			// F_Key
			// 
			this->F_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->F_Key->Location = System::Drawing::Point(265, 194);
			this->F_Key->Name = L"F_Key";
			this->F_Key->Size = System::Drawing::Size(50, 50);
			this->F_Key->TabIndex = 143;
			this->F_Key->Tag = L"F";
			this->F_Key->Text = L"F";
			this->F_Key->UseVisualStyleBackColor = true;
			// 
			// R_Key
			// 
			this->R_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->R_Key->Location = System::Drawing::Point(255, 138);
			this->R_Key->Name = L"R_Key";
			this->R_Key->Size = System::Drawing::Size(50, 50);
			this->R_Key->TabIndex = 142;
			this->R_Key->Tag = L"R";
			this->R_Key->Text = L"R";
			this->R_Key->UseVisualStyleBackColor = true;
			// 
			// C_Key
			// 
			this->C_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->C_Key->Location = System::Drawing::Point(224, 250);
			this->C_Key->Name = L"C_Key";
			this->C_Key->Size = System::Drawing::Size(50, 50);
			this->C_Key->TabIndex = 141;
			this->C_Key->Tag = L"C";
			this->C_Key->Text = L"C";
			this->C_Key->UseVisualStyleBackColor = true;
			// 
			// D_Key
			// 
			this->D_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->D_Key->Location = System::Drawing::Point(209, 194);
			this->D_Key->Name = L"D_Key";
			this->D_Key->Size = System::Drawing::Size(50, 50);
			this->D_Key->TabIndex = 140;
			this->D_Key->Tag = L"D";
			this->D_Key->Text = L"D";
			this->D_Key->UseVisualStyleBackColor = true;
			// 
			// E_Key
			// 
			this->E_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->E_Key->Location = System::Drawing::Point(199, 138);
			this->E_Key->Name = L"E_Key";
			this->E_Key->Size = System::Drawing::Size(50, 50);
			this->E_Key->TabIndex = 139;
			this->E_Key->Tag = L"E";
			this->E_Key->Text = L"E";
			this->E_Key->UseVisualStyleBackColor = true;
			// 
			// X_Key
			// 
			this->X_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->X_Key->Location = System::Drawing::Point(168, 250);
			this->X_Key->Name = L"X_Key";
			this->X_Key->Size = System::Drawing::Size(50, 50);
			this->X_Key->TabIndex = 138;
			this->X_Key->Tag = L"X";
			this->X_Key->Text = L"X";
			this->X_Key->UseVisualStyleBackColor = true;
			// 
			// S_Key
			// 
			this->S_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->S_Key->Location = System::Drawing::Point(153, 194);
			this->S_Key->Name = L"S_Key";
			this->S_Key->Size = System::Drawing::Size(50, 50);
			this->S_Key->TabIndex = 137;
			this->S_Key->Tag = L"S";
			this->S_Key->Text = L"S";
			this->S_Key->UseVisualStyleBackColor = true;
			// 
			// W_Key
			// 
			this->W_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->W_Key->Location = System::Drawing::Point(143, 138);
			this->W_Key->Name = L"W_Key";
			this->W_Key->Size = System::Drawing::Size(50, 50);
			this->W_Key->TabIndex = 136;
			this->W_Key->Tag = L"W";
			this->W_Key->Text = L"W";
			this->W_Key->UseVisualStyleBackColor = true;
			// 
			// Z_Key
			// 
			this->Z_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Z_Key->Location = System::Drawing::Point(112, 250);
			this->Z_Key->Name = L"Z_Key";
			this->Z_Key->Size = System::Drawing::Size(50, 50);
			this->Z_Key->TabIndex = 135;
			this->Z_Key->Tag = L"Z";
			this->Z_Key->Text = L"Z";
			this->Z_Key->UseVisualStyleBackColor = true;
			// 
			// A_Key
			// 
			this->A_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->A_Key->Location = System::Drawing::Point(97, 194);
			this->A_Key->Name = L"A_Key";
			this->A_Key->Size = System::Drawing::Size(50, 50);
			this->A_Key->TabIndex = 134;
			this->A_Key->Tag = L"A";
			this->A_Key->Text = L"A";
			this->A_Key->UseVisualStyleBackColor = true;
			// 
			// Q_Key
			// 
			this->Q_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Q_Key->Location = System::Drawing::Point(87, 138);
			this->Q_Key->Name = L"Q_Key";
			this->Q_Key->Size = System::Drawing::Size(50, 50);
			this->Q_Key->TabIndex = 133;
			this->Q_Key->Tag = L"Q";
			this->Q_Key->Text = L"Q";
			this->Q_Key->UseVisualStyleBackColor = true;
			// 
			// Equal_Key
			// 
			this->Equal_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Equal_Key->Location = System::Drawing::Point(678, 82);
			this->Equal_Key->Name = L"Equal_Key";
			this->Equal_Key->Size = System::Drawing::Size(50, 50);
			this->Equal_Key->TabIndex = 132;
			this->Equal_Key->Tag = L"Oemplus";
			this->Equal_Key->Text = L"= +";
			this->Equal_Key->UseVisualStyleBackColor = true;
			// 
			// Underline_Key
			// 
			this->Underline_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Underline_Key->Location = System::Drawing::Point(622, 82);
			this->Underline_Key->Name = L"Underline_Key";
			this->Underline_Key->Size = System::Drawing::Size(50, 50);
			this->Underline_Key->TabIndex = 131;
			this->Underline_Key->Tag = L"OemMinus";
			this->Underline_Key->Text = L"- _";
			this->Underline_Key->UseVisualStyleBackColor = true;
			// 
			// N0_Key
			// 
			this->N0_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->N0_Key->Location = System::Drawing::Point(566, 82);
			this->N0_Key->Name = L"N0_Key";
			this->N0_Key->Size = System::Drawing::Size(50, 50);
			this->N0_Key->TabIndex = 130;
			this->N0_Key->Tag = L"D0";
			this->N0_Key->Text = L"0 )";
			this->N0_Key->UseVisualStyleBackColor = true;
			// 
			// N9_Key
			// 
			this->N9_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->N9_Key->Location = System::Drawing::Point(510, 82);
			this->N9_Key->Name = L"N9_Key";
			this->N9_Key->Size = System::Drawing::Size(50, 50);
			this->N9_Key->TabIndex = 129;
			this->N9_Key->Tag = L"D9";
			this->N9_Key->Text = L"9 (";
			this->N9_Key->UseVisualStyleBackColor = true;
			// 
			// N8_Key
			// 
			this->N8_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->N8_Key->Location = System::Drawing::Point(454, 82);
			this->N8_Key->Name = L"N8_Key";
			this->N8_Key->Size = System::Drawing::Size(50, 50);
			this->N8_Key->TabIndex = 128;
			this->N8_Key->Tag = L"D8";
			this->N8_Key->Text = L"8 *";
			this->N8_Key->UseVisualStyleBackColor = true;
			// 
			// N7_Key
			// 
			this->N7_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->N7_Key->Location = System::Drawing::Point(398, 82);
			this->N7_Key->Name = L"N7_Key";
			this->N7_Key->Size = System::Drawing::Size(50, 50);
			this->N7_Key->TabIndex = 127;
			this->N7_Key->Tag = L"D7";
			this->N7_Key->Text = L"7 &&";
			this->N7_Key->UseVisualStyleBackColor = true;
			// 
			// N6_Key
			// 
			this->N6_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->N6_Key->Location = System::Drawing::Point(342, 82);
			this->N6_Key->Name = L"N6_Key";
			this->N6_Key->Size = System::Drawing::Size(50, 50);
			this->N6_Key->TabIndex = 126;
			this->N6_Key->Tag = L"D6";
			this->N6_Key->Text = L"6 ^";
			this->N6_Key->UseVisualStyleBackColor = true;
			// 
			// N5_Key
			// 
			this->N5_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->N5_Key->Location = System::Drawing::Point(286, 82);
			this->N5_Key->Name = L"N5_Key";
			this->N5_Key->Size = System::Drawing::Size(50, 50);
			this->N5_Key->TabIndex = 125;
			this->N5_Key->Tag = L"D5";
			this->N5_Key->Text = L"5 %";
			this->N5_Key->UseVisualStyleBackColor = true;
			// 
			// N4_Key
			// 
			this->N4_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->N4_Key->Location = System::Drawing::Point(230, 82);
			this->N4_Key->Name = L"N4_Key";
			this->N4_Key->Size = System::Drawing::Size(50, 50);
			this->N4_Key->TabIndex = 124;
			this->N4_Key->Tag = L"D4";
			this->N4_Key->Text = L"4 $";
			this->N4_Key->UseVisualStyleBackColor = true;
			// 
			// N3_Key
			// 
			this->N3_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->N3_Key->Location = System::Drawing::Point(174, 82);
			this->N3_Key->Name = L"N3_Key";
			this->N3_Key->Size = System::Drawing::Size(50, 50);
			this->N3_Key->TabIndex = 123;
			this->N3_Key->Tag = L"D3";
			this->N3_Key->Text = L"3 #";
			this->N3_Key->UseVisualStyleBackColor = true;
			// 
			// N2_Key
			// 
			this->N2_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->N2_Key->Location = System::Drawing::Point(118, 82);
			this->N2_Key->Name = L"N2_Key";
			this->N2_Key->Size = System::Drawing::Size(50, 50);
			this->N2_Key->TabIndex = 122;
			this->N2_Key->Tag = L"D2";
			this->N2_Key->Text = L"2 @";
			this->N2_Key->UseVisualStyleBackColor = true;
			// 
			// N1_Key
			// 
			this->N1_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->N1_Key->Location = System::Drawing::Point(62, 82);
			this->N1_Key->Name = L"N1_Key";
			this->N1_Key->Size = System::Drawing::Size(50, 50);
			this->N1_Key->TabIndex = 121;
			this->N1_Key->Tag = L"D1";
			this->N1_Key->Text = L"1 !";
			this->N1_Key->UseVisualStyleBackColor = true;
			// 
			// LAlt_Key
			// 
			this->LAlt_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->LAlt_Key->Location = System::Drawing::Point(128, 306);
			this->LAlt_Key->Name = L"LAlt_Key";
			this->LAlt_Key->Size = System::Drawing::Size(55, 50);
			this->LAlt_Key->TabIndex = 120;
			this->LAlt_Key->Tag = L"LMenu";
			this->LAlt_Key->Text = L"LAlt";
			this->LAlt_Key->UseVisualStyleBackColor = true;
			// 
			// LWin_Key
			// 
			this->LWin_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->LWin_Key->Location = System::Drawing::Point(67, 306);
			this->LWin_Key->Name = L"LWin_Key";
			this->LWin_Key->Size = System::Drawing::Size(55, 50);
			this->LWin_Key->TabIndex = 119;
			this->LWin_Key->Tag = L"LWin";
			this->LWin_Key->Text = L"LWin";
			this->LWin_Key->UseVisualStyleBackColor = true;
			// 
			// LCtrl_Key
			// 
			this->LCtrl_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->LCtrl_Key->Location = System::Drawing::Point(6, 306);
			this->LCtrl_Key->Name = L"LCtrl_Key";
			this->LCtrl_Key->Size = System::Drawing::Size(55, 50);
			this->LCtrl_Key->TabIndex = 118;
			this->LCtrl_Key->Tag = L"LControlKey";
			this->LCtrl_Key->Text = L"LCtrl";
			this->LCtrl_Key->UseVisualStyleBackColor = true;
			// 
			// LShift_Key
			// 
			this->LShift_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->LShift_Key->Location = System::Drawing::Point(6, 250);
			this->LShift_Key->Name = L"LShift_Key";
			this->LShift_Key->Size = System::Drawing::Size(100, 50);
			this->LShift_Key->TabIndex = 117;
			this->LShift_Key->Tag = L"LShiftKey";
			this->LShift_Key->Text = L"LShift";
			this->LShift_Key->UseVisualStyleBackColor = true;
			// 
			// CapsLock__Key
			// 
			this->CapsLock__Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->CapsLock__Key->Location = System::Drawing::Point(6, 194);
			this->CapsLock__Key->Name = L"CapsLock__Key";
			this->CapsLock__Key->Size = System::Drawing::Size(85, 50);
			this->CapsLock__Key->TabIndex = 116;
			this->CapsLock__Key->Tag = L"Capital";
			this->CapsLock__Key->Text = L"Caps Lock";
			this->CapsLock__Key->UseVisualStyleBackColor = true;
			// 
			// Tab__Key
			// 
			this->Tab__Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Tab__Key->Location = System::Drawing::Point(6, 138);
			this->Tab__Key->Name = L"Tab__Key";
			this->Tab__Key->Size = System::Drawing::Size(75, 50);
			this->Tab__Key->TabIndex = 115;
			this->Tab__Key->Tag = L"Tab";
			this->Tab__Key->Text = L"Tab";
			this->Tab__Key->UseVisualStyleBackColor = true;
			// 
			// Tilde_Key
			// 
			this->Tilde_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Tilde_Key->Location = System::Drawing::Point(6, 82);
			this->Tilde_Key->Name = L"Tilde_Key";
			this->Tilde_Key->Size = System::Drawing::Size(50, 50);
			this->Tilde_Key->TabIndex = 114;
			this->Tilde_Key->Tag = L"Oemtilde";
			this->Tilde_Key->Text = L"` ~";
			this->Tilde_Key->UseVisualStyleBackColor = true;
			// 
			// ESC_Key
			// 
			this->ESC_Key->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->ESC_Key->Location = System::Drawing::Point(6, 21);
			this->ESC_Key->Name = L"ESC_Key";
			this->ESC_Key->Size = System::Drawing::Size(50, 50);
			this->ESC_Key->TabIndex = 113;
			this->ESC_Key->Tag = L"Escape";
			this->ESC_Key->Text = L"ESC";
			this->ESC_Key->UseVisualStyleBackColor = true;
			// 
			// Description1_label
			// 
			this->Description1_label->AutoSize = true;
			this->Description1_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Description1_label->Location = System::Drawing::Point(9, 529);
			this->Description1_label->Name = L"Description1_label";
			this->Description1_label->Size = System::Drawing::Size(379, 16);
			this->Description1_label->TabIndex = 6;
			this->Description1_label->Text = L"* 設定之配置使用100%滿版108鍵鍵盤（常規）。";
			// 
			// Description2_label
			// 
			this->Description2_label->AutoSize = true;
			this->Description2_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->Description2_label->ForeColor = System::Drawing::Color::Red;
			this->Description2_label->Location = System::Drawing::Point(9, 554);
			this->Description2_label->Name = L"Description2_label";
			this->Description2_label->Size = System::Drawing::Size(719, 16);
			this->Description2_label->TabIndex = 7;
			this->Description2_label->Text = L"* 你的鍵盤上可能沒有某些按鍵。且若你的鍵盤為特規，則設定之配置可能沒有你想要的按鍵。";
			// 
			// Description3_label
			// 
			this->Description3_label->AutoSize = true;
			this->Description3_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Description3_label->ForeColor = System::Drawing::Color::Blue;
			this->Description3_label->Location = System::Drawing::Point(9, 580);
			this->Description3_label->Name = L"Description3_label";
			this->Description3_label->Size = System::Drawing::Size(855, 16);
			this->Description3_label->TabIndex = 8;
			this->Description3_label->Text = L"* 你能夠選擇上方個別按鍵來設定。也能夠直接按你鍵盤的按鍵來選擇並設定。（設定在選擇音檔後就會先暫存）";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Aqua;
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(1148, 561);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(25, 25);
			this->button2->TabIndex = 221;
			this->button2->Tag = L"Up";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// Annotation2_label
			// 
			this->Annotation2_label->AutoSize = true;
			this->Annotation2_label->Location = System::Drawing::Point(1179, 567);
			this->Annotation2_label->Name = L"Annotation2_label";
			this->Annotation2_label->Size = System::Drawing::Size(59, 12);
			this->Annotation2_label->TabIndex = 222;
			this->Annotation2_label->Text = L"Already Set";
			// 
			// Annotation1_label
			// 
			this->Annotation1_label->AutoSize = true;
			this->Annotation1_label->Location = System::Drawing::Point(1179, 536);
			this->Annotation1_label->Name = L"Annotation1_label";
			this->Annotation1_label->Size = System::Drawing::Size(41, 12);
			this->Annotation1_label->TabIndex = 224;
			this->Annotation1_label->Text = L"現選擇";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Yellow;
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"PMingLiU", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(1148, 530);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(25, 25);
			this->button3->TabIndex = 223;
			this->button3->Tag = L"Up";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->languageToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1259, 24);
			this->menuStrip1->TabIndex = 225;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->zhTWToolStripMenuItem,
					this->englishToolStripMenuItem
			});
			this->languageToolStripMenuItem->Name = L"languageToolStripMenuItem";
			this->languageToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->languageToolStripMenuItem->Text = L"Language";
			// 
			// zhTWToolStripMenuItem
			// 
			this->zhTWToolStripMenuItem->Name = L"zhTWToolStripMenuItem";
			this->zhTWToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->zhTWToolStripMenuItem->Text = L"繁體中文 (zh-TW)";
			this->zhTWToolStripMenuItem->Click += gcnew System::EventHandler(this, &SettingsForm::zhTWToolStripMenuItem_Click);
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Name = L"englishToolStripMenuItem";
			this->englishToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->englishToolStripMenuItem->Text = L"English (en)";
			this->englishToolStripMenuItem->Click += gcnew System::EventHandler(this, &SettingsForm::englishToolStripMenuItem_Click);
			// 
			// SettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1259, 615);
			this->Controls->Add(this->Annotation1_label);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Annotation2_label);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Description3_label);
			this->Controls->Add(this->Description2_label);
			this->Controls->Add(this->Description1_label);
			this->Controls->Add(this->Btn_groupBox);
			this->Controls->Add(this->Reset_Btn);
			this->Controls->Add(this->ResetAll_Btn);
			this->Controls->Add(this->Save_Btn);
			this->Controls->Add(this->Back_Btn);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"SettingsForm";
			this->Text = L"Settings";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &SettingsForm::SettingsForm_FormClosed);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &SettingsForm::SettingsForm_KeyUp);
			this->groupBox1->ResumeLayout(false);
			this->Btn_groupBox->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

			ReloadForm();
		}
#pragma endregion
	private:
		Form^ rootForm;
		Dictionary<String^, String^>^ tmpKeyToAudioDict;
		Dictionary<String^, String^>^ tmpMouseToAudioDict;

		Button^ selectedKey_Btn;

		System::Void ResetSelected(bool isReset);
		System::Void SelectedKey(String^ key);

		System::Void KeyClick(System::Object^ sender, System::EventArgs^ e);
		System::Void ReloadForm();

	private: System::Void SettingsForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
	private: System::Void Back_Btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ResetAll_Btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Reset_Btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SelectAudio_Btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Save_Btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void KeyName_Label_TextChanged(System::Object^ sender, System::EventArgs^ e);

	// abandon original special key's function, such as ENTER, ESC, ARROW_KEY, TAB...
	public: virtual bool ProcessDialogKey(System::Windows::Forms::Keys keyData) override; 
	private: System::Void SettingsForm_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

	private: System::Void zhTWToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void englishToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
