#include "INI_Process.h"

INI_Process::INI_Process(CString filePath)
{
	this->filePath = filePath;
}

void INI_Process::WriteToINI(const CString section, const CString key, const CString val)
{
	WritePrivateProfileString(section, key, val, filePath);
}

void INI_Process::WriteEndInSection()
{
	std::fstream file;
	file.open(filePath, std::ios::app); // write an existing file
	file << std::endl;
	file.close();
}

CString INI_Process::ReadFromINI(const CString section, const CString key)
{
	CString buffer;
	char utf8Buffer[MAX_PATH];

	GetPrivateProfileStringA(CW2A(section), CW2A(key), "", utf8Buffer, MAX_PATH, CW2A(filePath));

	// convert UTF-8 to Unicode (for code process needs)
	int length = MultiByteToWideChar(CP_UTF8, 0, utf8Buffer, -1, NULL, 0);
	wchar_t* wideBuffer = new wchar_t[length];
	MultiByteToWideChar(CP_UTF8, 0, utf8Buffer, -1, wideBuffer, length);

	buffer = wideBuffer;
	delete[] wideBuffer;

	return buffer;
}