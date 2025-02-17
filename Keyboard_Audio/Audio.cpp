#include "Audio.h"

void Audio::Play()
{
	mciSendString(L"open \"Aoi_H_Audio_20230605.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
	mciSendString(L"play mp3 from 0", NULL, 0, NULL);
}

DWORD WINAPI Audio::AudioPlayThread(LPVOID lpParameter)
{
	Play();
	return 0;
}

void Audio::CreateThreads()
{
	audioHandler = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Audio::AudioPlayThread, 0, 0, 0);
}
