#include "Main.h"
#include "INI_Process.h"
#include "RootForm.h"
#include <windows.h>
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Text;
using namespace System::Diagnostics;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

[STAThreadAttribute]
int main(void)
{
	KeyboardAudio::Main main;

	FreeConsole(); // hide console windows

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew KeyboardAudio::RootForm());
	return 0;
}

KeyboardAudio::Main::Main(void)
{
	keyToAudioDict = InitKeyDict();
	mouseToAudioDict = InitMouseDict();

	if (!File::Exists(iniPath))
		InitIniFile(iniPath, keyToAudioDict, mouseToAudioDict);
	else
		LoadDictFromIniFile(keyToAudioDict, mouseToAudioDict, iniPath);
}

System::Void KeyboardAudio::Main::UpdateIniFileLang(String^ filePath, String^ lang)
{
	Main::lang = lang;
	INI_Process ini = INI_Process(iniPath);
	ini.WriteToINI("Language", "lang", lang);
	ini.WriteEndInSection();
	return System::Void();
}

System::Void KeyboardAudio::Main::CreateNewIniFile(String^ filePath, Dictionary<String^, String^>^ keyDict, Dictionary<String^, String^>^ mouseDict)
{
	INI_Process ini = INI_Process(filePath);

	ini.WriteToINI("Language", "lang", lang);
	ini.WriteEndInSection();

	for each (auto key in mouseDict->Keys)
		ini.WriteToINI("MouseButton-Audio-Source", key, mouseDict[key]);
	ini.WriteEndInSection();

	for each (auto key in keyDict->Keys)
		ini.WriteToINI("Keyboard-Audio-Source", key, keyDict[key]);
	ini.WriteEndInSection();

	return System::Void();
}

Dictionary<String^, String^>^ KeyboardAudio::Main::InitKeyDict()
{
	Dictionary<String^, String^>^ tmpDict = gcnew Dictionary<String^, String^>();

	// process Keyboard's key
	for each (Keys keyCode in Enum::GetValues(Keys::typeid))
	{
		String^ key = keyCode.ToString();
		//Debug::WriteLine(key);
		// only record useful keys, and some
		if ((keyCode >= Keys::A && keyCode <= Keys::Z)
			|| (keyCode >= Keys::D0 && keyCode <= Keys::D9)
			|| (keyCode >= Keys::NumPad0 && keyCode <= Keys::NumPad9 || keyCode == Keys::Divide || keyCode == Keys::Multiply || keyCode == Keys::Subtract || keyCode == Keys::Add || keyCode == Keys::Decimal)
			|| (keyCode >= Keys::F1 && keyCode <= Keys::F24) || keyCode == Keys::Escape || keyCode == Keys::Pause
			|| keyCode == Keys::Up || keyCode == Keys::Down || keyCode == Keys::Left || keyCode == Keys::Right
			|| keyCode == Keys::Back || keyCode == Keys::Return || keyCode == Keys::Tab || keyCode == Keys::Space
			|| keyCode == Keys::Scroll || keyCode == Keys::NumLock || keyCode == Keys::CapsLock
			|| keyCode == Keys::LaunchApplication1 || keyCode == Keys::LaunchApplication2
			|| keyCode == Keys::VolumeMute || keyCode == Keys::VolumeUp || keyCode == Keys::VolumeDown
			|| keyCode == Keys::Insert || keyCode == Keys::Delete || keyCode == Keys::Home || keyCode == Keys::End || keyCode == Keys::PageUp || keyCode == Keys::PageDown
			|| keyCode == Keys::Oem1 || keyCode == Keys::Oem2 || keyCode == Keys::Oem3 || keyCode == Keys::Oem4 || keyCode == Keys::Oem5 || keyCode == Keys::Oem6 || keyCode == Keys::Oem7 || keyCode == Keys::Oem8 || keyCode == Keys::Oem102
			|| keyCode == Keys::Oemtilde || keyCode == Keys::OemMinus || keyCode == Keys::Oemplus || keyCode == Keys::Oemcomma || keyCode == Keys::OemOpenBrackets || keyCode == Keys::OemCloseBrackets
			|| keyCode == Keys::OemBackslash || keyCode == Keys::OemClear || keyCode == Keys::OemPeriod || keyCode == Keys::OemPipe || keyCode == Keys::OemQuestion || keyCode == Keys::OemQuotes || keyCode == Keys::OemSemicolon
			|| keyCode == Keys::LControlKey || keyCode == Keys::RControlKey || keyCode == Keys::LShiftKey || keyCode == Keys::RShiftKey || keyCode == Keys::LMenu || keyCode == Keys::RMenu
			|| keyCode == Keys::LWin || keyCode == Keys::RWin || keyCode == Keys::PrintScreen)
		{
			if (!tmpDict->ContainsKey(key)) tmpDict->Add(key, String::Empty);
		}
	}

	return tmpDict;
}

Dictionary<String^, String^>^ KeyboardAudio::Main::InitMouseDict()
{
	Dictionary<String^, String^>^ tmpDict = gcnew Dictionary<String^, String^>();

	// Process MouseButton's key
	tmpDict->Add(System::Windows::Forms::MouseButtons::Left.ToString(), String::Empty);
	tmpDict->Add(System::Windows::Forms::MouseButtons::Right.ToString(), String::Empty);
	tmpDict->Add(System::Windows::Forms::MouseButtons::Middle.ToString(), String::Empty);
	tmpDict->Add(System::Windows::Forms::MouseButtons::XButton1.ToString(), String::Empty);
	tmpDict->Add(System::Windows::Forms::MouseButtons::XButton2.ToString(), String::Empty);

	return tmpDict;
}

System::Void KeyboardAudio::Main::InitIniFile(String^ filePath, Dictionary<String^, String^>^ keyDict, Dictionary<String^, String^>^ mouseDict)
{
	CreateNewIniFile(filePath, keyDict, mouseDict);
	return System::Void();
}

System::Void KeyboardAudio::Main::LoadDictFromIniFile(Dictionary<String^, String^>^ keyDict, Dictionary<String^, String^>^ mouseDict, String^ filePath)
{
	INI_Process ini = INI_Process(filePath);

	lang = gcnew String(ini.ReadFromINI("Language", "lang"));

	List<String^>^ mouseDictKeys = gcnew List<String^>(mouseDict->Keys);
	for each (auto key in mouseDictKeys)
		mouseDict[key] = gcnew String(ini.ReadFromINI("MouseButton-Audio-Source", key));

	List<String^>^ keyDictKeys = gcnew List<String^>(keyDict->Keys);
	for each (auto key in keyDictKeys)
		keyDict[key] = gcnew String(ini.ReadFromINI("Keyboard-Audio-Source", key));

	return System::Void();
}