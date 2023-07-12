#include "GlobalHooks.h"

GlobalHooks::GlobalHooks()
{
	llkh = gcnew LLKeyboardHook(&GlobalHooks::KBHookProcWrapper);
	//mh = gcnew MouseHook(&GlobalHooks::MouseHookProcWrapper);
}

void GlobalHooks::InstallHook()
{
	kbHookHandle = SetWindowsHookEx(WH_KEYBOARD_LL, (HOOKPROC)KBHookProc, GetModuleHandle(NULL), 0);
	//mouseHookHandle = SetWindowsHookEx(WH_MOUSE_LL, (HOOKPROC)MouseHookProc, GetModuleHandle(NULL), 0); // mouse click hook
	if (!kbHookHandle) std::cout << "Installing keyboard hook failed." << std::endl;
	//if (!mouseHookHandle) std::cout << "Installing mouse hook failed." << std::endl;
}

void GlobalHooks::UninstallHook()
{
	UnhookWindowsHookEx(kbHookHandle);
	//UnhookWindowsHookEx(mouseHookHandle);
}

LRESULT CALLBACK GlobalHooks::KBHookProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	if (nCode >= 0)
	{
		KBDLLHOOKSTRUCT* pKbdllHook = ((KBDLLHOOKSTRUCT*)lParam);
		if (hookedKeys->Contains((Keys)pKbdllHook->vkCode))
		{
			KeyEventArgs^ kArg = gcnew KeyEventArgs((Keys)pKbdllHook->vkCode);
			if ((wParam == WM_KEYDOWN || wParam == WM_SYSKEYDOWN) && keyDownHandler != nullptr)
				KeyDown(nullptr, kArg);
			
			else if ((wParam == WM_KEYUP || wParam == WM_SYSKEYUP) && keyUpHandler != nullptr)
				KeyUp(nullptr, kArg);

			if (kArg->Handled) return 1;
		}
	}

	return CallNextHookEx(kbHookHandle, nCode, wParam, lParam);
}

/* TODO : Mouse Hook */
LRESULT CALLBACK GlobalHooks::MouseHookProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	if (nCode >= 0) {
		MSLLHOOKSTRUCT* pMouseStruct = (MSLLHOOKSTRUCT*)lParam;
		/*if (pMouseStruct != NULL) {
			std::cout << "Mouse: x =  " << pMouseStruct->pt.x << "  y =  " << pMouseStruct->pt.y << std::endl;
		}*/

		MouseButtons button = MouseButtons::None;

		switch (wParam) {
		case WM_LBUTTONDOWN: button = MouseButtons::Left; break;
		case WM_RBUTTONDOWN: button = MouseButtons::Right; break;
		
		}
	}

	return CallNextHookEx(mouseHookHandle, nCode, wParam, lParam);
}

int GlobalHooks::KBHookProcWrapper(int nCode, WPARAM wParam, LPARAM lParam)
{
	return KBHookProc(nCode, wParam, lParam);
}

int GlobalHooks::MouseHookProcWrapper(int nCode, WPARAM wParam, LPARAM lParam)
{
	return MouseHookProc(nCode, wParam, lParam);
}
