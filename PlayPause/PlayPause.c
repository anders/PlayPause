#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	keybd_event(VK_MEDIA_PLAY_PAUSE, 0, 0, 0);
	keybd_event(VK_MEDIA_PLAY_PAUSE, 0, KEYEVENTF_KEYUP, 0);
}
