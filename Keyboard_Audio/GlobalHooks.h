#pragma once

/*
* This class is for global hooks' function.
* Including keyboard and mouse.
* 
* But it's only for C++/CLI.
* If for Standard C++, this code must modify.
*/

#include <iostream>
#include <windows.h>

#pragma comment(lib, "user32.lib")

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

public ref class GlobalHooks
{
private:
	static HHOOK kbHookHandle;
	static HHOOK mouseHookHandle;

	static KeyEventHandler^ keyDownHandler;
	static KeyEventHandler^ keyUpHandler;

	static LRESULT CALLBACK KBHookProc(int nCode, WPARAM wParam, LPARAM lParam);
	static LRESULT CALLBACK MouseHookProc(int nCode, WPARAM wParam, LPARAM lParam);

	static int KBHookProcWrapper(int nCode, WPARAM wParam, LPARAM lParam);
	static int MouseHookProcWrapper(int nCode, WPARAM wParam, LPARAM lParam);

public:
	static List<Keys>^ hookedKeys = gcnew List<Keys>(); // only key in list can be hooked
	static List<System::Windows::Forms::MouseButtons>^ hookedMouse 
		= gcnew List<System::Windows::Forms::MouseButtons>(); // only key in list can be hooked

	static event KeyEventHandler^ KeyDown
	{
		void add(KeyEventHandler^ handler)
		{
			keyDownHandler += handler;
		}
		void remove(KeyEventHandler^ handler)
		{
			keyDownHandler -= handler;
		}
		void raise(Object^ sender, KeyEventArgs^ e)
		{
			keyDownHandler(sender, e);
		}
	}
	static event KeyEventHandler^ KeyUp
	{
		void add(KeyEventHandler^ handler)
		{
			keyUpHandler += handler;
		}
		void remove(KeyEventHandler^ handler)
		{
			keyUpHandler -= handler;
		}
		void raise(Object^ sender, KeyEventArgs^ e)
		{
			keyUpHandler(sender, e);
		}
	}

	delegate int LLKeyboardHook(int nCode, WPARAM wParam, LPARAM lParam);
	delegate int MouseHook(int nCode, WPARAM wParam, LPARAM lParam);

	LLKeyboardHook^ llkh;
	MouseHook^ mh;

	GlobalHooks();

	static void InstallHook();
	static void UninstallHook();
};