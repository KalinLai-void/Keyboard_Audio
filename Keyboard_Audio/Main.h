#pragma once

#include <string>

namespace KeyboardAudio
{
	using namespace System;
	using namespace System::IO;
	using namespace System::Collections;
	using namespace System::Collections::Generic;

	public ref class Main
	{
	public:
		Main(void);

	public:
		static String^ lang = "zh-TW";

		static String^ currentPath = Directory::GetCurrentDirectory(); // absolute path
		static String^ iniPath = Path::Combine(currentPath, "settings.ini");
		static Dictionary<String^, String^>^ keyToAudioDict;
		static Dictionary<String^, String^>^ mouseToAudioDict;

		static System::Void CreateNewIniFile(String^ filePath, Dictionary<String^, String^>^ keyDict, Dictionary<String^, String^>^ mouseDict);
		static System::Void UpdateIniFileLang(String^ filePath, String^ lang);

	private:
		Dictionary<String^, String^>^ InitKeyDict();
		Dictionary<String^, String^>^ InitMouseDict();
		System::Void InitIniFile(String^ filePath, Dictionary<String^, String^>^ keyDict, Dictionary<String^, String^>^ mouseDict);
		System::Void LoadDictFromIniFile(Dictionary<String^, String^>^ keyDict, Dictionary<String^, String^>^ mouseDict, String^ filePath);
	};
};