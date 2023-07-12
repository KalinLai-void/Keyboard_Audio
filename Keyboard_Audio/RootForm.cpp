#include "RootForm.h"
#include "Main.h"

using namespace System;
using namespace System::Text;
using namespace Windows::Forms;

KeyboardAudio::RootForm::RootForm(void)
{
	InitializeComponent();

	keyToAudioDict = KeyboardAudio::Main::keyToAudioDict;
	mouseToAudioDict = KeyboardAudio::Main::mouseToAudioDict;
}

KeyboardAudio::RootForm::~RootForm()
{
	if (components) delete components;
}

Void KeyboardAudio::RootForm::RootForm_Load(Object^ sender, EventArgs^ e)
{
	gHooks->KeyDown += gcnew KeyEventHandler(this, &KeyboardAudio::RootForm::Hooks_KeyDown);
	for each (Keys key in Enum::GetValues(Keys::typeid))
		gHooks->hookedKeys->Add(key);

	/* TODO : Mouse Hook */
	gHooks->hookedMouse->Add(System::Windows::Forms::MouseButtons::Left);
	gHooks->hookedMouse->Add(System::Windows::Forms::MouseButtons::Right);
	gHooks->hookedMouse->Add(System::Windows::Forms::MouseButtons::Middle);
	gHooks->hookedMouse->Add(System::Windows::Forms::MouseButtons::XButton1);
	gHooks->hookedMouse->Add(System::Windows::Forms::MouseButtons::XButton2);

	return Void();
}

Void KeyboardAudio::RootForm::EnableBtn_Click(Object^ sender, EventArgs^ e)
{
	isEnabled = !isEnabled;
	Enable_Btn->Text = Enable_Btn->Text->Replace(!isEnabled ? "Disable" : "Enable", isEnabled ? "Disable" : "Enable");
	Enable_Btn->BackColor = isEnabled ? SystemColors::ControlDark : SystemColors::Control;

	if (isEnabled)	gHooks->InstallHook();
	else			gHooks->UninstallHook();

	return Void();
}

System::Void KeyboardAudio::RootForm::settingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	settingForm = gcnew SettingsForm(this); 
	settingForm->Show();
	this->Hide();
	return System::Void();
}

System::Void KeyboardAudio::RootForm::RootForm_VisibleChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (!this->Visible)
	{
		if (isEnabled) EnableBtn_Click(this, gcnew EventArgs());
	}
}

System::Void KeyboardAudio::RootForm::ReloadForm()
{
	// Lang init
	if (Main::lang == "zh-TW")
	{
		Enable_Btn->Text = "點擊啟動";
		settingsToolStripMenuItem->Text = "設定";
		aboutToolStripMenuItem->Text = "關於";
	}
	else
	{
		Enable_Btn->Text = "Click to Enable";
		settingsToolStripMenuItem->Text = "Settings";
		aboutToolStripMenuItem->Text = "About";
	}
	return System::Void();
}

Void KeyboardAudio::RootForm::Hooks_KeyDown(Object^ sender, Windows::Forms::KeyEventArgs^ e)
{
	String^ key = (e->KeyCode).ToString();
	Console::WriteLine(key + " " + keyToAudioDict[key]);

	if (keyToAudioDict->ContainsKey(key) && !String::IsNullOrEmpty(keyToAudioDict[key]))
	{
		// convert String^ to char*
		// get unsigned char array from String^
		array<wchar_t>^ chArray = keyToAudioDict[key]->ToCharArray();
		array<unsigned char, 1>^ arr = Encoding::UTF8->GetBytes(chArray);

		// c array
		char* c_arr = new char[arr->Length + 1];
		memset(c_arr, NULL, arr->Length + 1);
		IntPtr c_arr_ptr(c_arr);

		// copy from .NET unsigned char array to char array
		Marshal::Copy(arr, 0, c_arr_ptr, arr->Length);

		FMOD::Sound* soundSample;
		sound->CreateSound(&soundSample, c_arr);
		sound->PlayingSound(soundSample, false);
	}
}