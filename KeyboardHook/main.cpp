#include "Audio.h"
#include <iostream>
#include <Windows.h>
#include <winuser.h>

using namespace std;
HHOOK g_hHook;

#define AOI_AUDIO "Audio/Aoi_20230605.wav"

DWORD WINAPI AoiAudio_Play(LPVOID lpParameter)
{
    Audio aoiAudio(AOI_AUDIO);
    aoiAudio.Play();
    aoiAudio.End();
    return 0;
}

LRESULT CALLBACK KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    if (nCode >= 0 && wParam == WM_KEYDOWN)
    {
        KBDLLHOOKSTRUCT* pKbdllHook = (KBDLLHOOKSTRUCT*)lParam;
        //std::cout << pKbdllHook->scanCode;
        if (pKbdllHook->scanCode == 28) // 28 is "Enter" key
        {
            HANDLE aoiAudioHandle = CreateThread(0, 0, AoiAudio_Play, 0, 0, 0);
        }
        //std::cout << std::endl;
    }

    return CallNextHookEx(g_hHook, nCode, wParam, lParam);
}

void InstallHook()
{
    g_hHook = SetWindowsHookEx(WH_KEYBOARD_LL, KeyboardProc, GetModuleHandle(NULL), 0);
    if (!g_hHook) std::cout << "Installing hook failed." << std::endl;
}

void UninstallHook()
{
    UnhookWindowsHookEx(g_hHook);
}

int main()
{
    InstallHook();

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    UninstallHook();

    return 0;
}