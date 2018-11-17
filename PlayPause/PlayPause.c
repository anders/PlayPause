#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	INPUT inputs[2] = {
		{ .type = INPUT_KEYBOARD, .ki.wVk = VK_MEDIA_PLAY_PAUSE },
		{ .type = INPUT_KEYBOARD, .ki.wVk = VK_MEDIA_PLAY_PAUSE, .ki.dwFlags = KEYEVENTF_KEYUP },
	};
	SendInput(2, inputs, sizeof(INPUT));
}
