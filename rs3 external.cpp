#include <iostream>
#include <Windows.h>
#include <string>

// RS3 SCRIPT, BOT; USE AT YOUR OWN RISK!
// SORRY! THIS VERSION DOES NOT LOOP/REPEAT THE ROUTINE, IT IS NOT SAFELY DESIGNED TO DO SO. PLEASE MONITOR EACH SESSION..
// REQUIREMENTS: 1920x1080, FULLSCREEN W/ ALIGNMENT LIKE-WISE; https://ibb.co/FKcnBZH

int x[7] = { 960, 959, 762, 898, 1062, 985, 908 };
int y[7] = { 490, 368, 475, 659, 535, 631, 553 };

using namespace std;
int main() {
	char userChoice;
	cout << "-{KRAKEN}-: START ROUTINE? [Y/N]: ", cin >> userChoice;
	if (userChoice == 'y' || userChoice == 'Y') {
		system("CLS");
		cout << "-{KRAKEN}-: STARTING ROUTINE IN --3s--";
		Sleep(3000);
		system("CLS");
		for (int i = 0; i < 7; i++) {
			cout << "[BOT]: OBSTACLE [", cout << i+1, cout << "/7]", cout << "\n";
			SetCursorPos(x[i], y[i]);
			Sleep(3);
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(9250);
		}
		cout << "\n-{KRAKEN}-: ROUTINE FINISHED! EXIT? [Y/N]: ", cin >> userChoice;
		if (userChoice == 'y' || userChoice == 'Y') {
			exit(3);
		}
		else {
			system("CLS");
			main();
		}
	}
	else {
		exit(3);
	}
}