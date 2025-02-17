#pragma once

#include <Windows.h>
#include <Mmsystem.h>
#include <mciapi.h>

#pragma comment(lib, "winmm.lib")

public ref class Audio
{
private:
	HANDLE audioHandler;

	static void Play();

public:
	static DWORD WINAPI AudioPlayThread(LPVOID lpParameter);
	void CreateThreads();
};