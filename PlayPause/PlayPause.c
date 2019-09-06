#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

int WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow) {
	INPUT inputs[2] = {
		{ .type = INPUT_KEYBOARD, .ki.wVk = VK_MEDIA_PLAY_PAUSE },
		{ .type = INPUT_KEYBOARD, .ki.wVk = VK_MEDIA_PLAY_PAUSE, .ki.dwFlags = KEYEVENTF_KEYUP },
	};
	SendInput(2, inputs, sizeof(INPUT));
}
