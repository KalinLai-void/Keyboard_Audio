#pragma once

/*
* This class is for INI file process.
* Any about INI file base function is in here.
*/

#include <atlstr.h>
#include <fstream>
#include <string>
#include <windows.h>

public class INI_Process
{
private:
	CString filePath;

public:
	INI_Process(CString filePath);
	
	void WriteToINI(const CString section, const CString key, const CString val);
	void WriteEndInSection();
	CString ReadFromINI(const CString section, const CString key);
};