#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string>


int main() {
	std::cout << "Waiting..." << std::endl;

	Sleep(10000);

	std::cout << "START" << std::endl;

	while (true) {
		// 退出篝火
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
		Sleep(50);
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

		Sleep(4000);

		// 五次陨石咒
		for (int i = 0; i < 5; i++) {
			mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
			Sleep(50);
			mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
			Sleep(4000);
		}

		// 进入篝火
		mouse_event(MOUSEEVENTF_MIDDLEDOWN, 0, 0, 0, 0);
		Sleep(50);
		mouse_event(MOUSEEVENTF_MIDDLEUP, 0, 0, 0, 0);
		Sleep(3500);
	}
}
