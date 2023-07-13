#pragma once

namespace KeyboardAudio {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AboutForm
	/// </summary>
	public ref class AboutForm : public System::Windows::Forms::Form
	{
	public:
		AboutForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AboutForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(416, 228);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Keyboard Audio\r\nVersion: 2.0.0\r\n\r\nThis project is OPEN-SOURCE.\r\nSee project Githu"
				L"b to see more details.\r\n\r\nMade by Kalin Lai\r\n(aka ­·»þ»î¤Ó aka KalinKonta)";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// linkLabel1
			// 
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->linkLabel1->Location = System::Drawing::Point(283, 196);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(61, 26);
			this->linkLabel1->TabIndex = 1;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Github";
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AboutForm::linkLabel1_LinkClicked);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(251, 196);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(26, 26);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &AboutForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(105, 196);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(26, 26);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// linkLabel2
			// 
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->linkLabel2->Location = System::Drawing::Point(137, 196);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(108, 26);
			this->linkLabel2->TabIndex = 4;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Kalin\'s Twitter";
			this->linkLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AboutForm::linkLabel2_LinkClicked);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(29, 238);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(31, 31);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// linkLabel3
			// 
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"PMingLiU", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->linkLabel3->Location = System::Drawing::Point(65, 235);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(356, 45);
			this->linkLabel3->TabIndex = 6;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"[Promote] Icon is Taiwanese VTuber, Aoi Hinamori.\r\nMy inspiration for development"
				L" comes from her.\r\n";
			this->linkLabel3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AboutForm::linkLabel3_LinkClicked);
			// 
			// AboutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(440, 290);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AboutForm";
			this->Text = L"AboutForm";
			this->Load += gcnew System::EventHandler(this, &AboutForm::AboutForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AboutForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
	private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
	private: System::Void linkLabel3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
