#include <iostream>
#include <iomanip>
#include <locale.h>
#include <windows.h>
#include "TextTable.h"
#include "conio.h"
#include "tchar.h"

using namespace std;

class start {
public:

	void creator() {

		cout << R"(
                                                       /$$                           /$$                          
                                                      | $$                          | $$                          
  /$$$$$$$  /$$$$$$   /$$$$$$$ /$$$$$$/$$$$   /$$$$$$ | $$$$$$$   /$$$$$$   /$$$$$$$| $$   /$$  /$$$$$$   /$$$$$$ 
 /$$_____/ /$$__  $$ /$$_____/| $$_  $$_  $$ /$$__  $$| $$__  $$ |____  $$ /$$_____/| $$  /$$/ /$$__  $$ /$$__  $$
| $$      | $$  \ $$|  $$$$$$ | $$ \ $$ \ $$| $$  \ $$| $$  \ $$  /$$$$$$$| $$      | $$$$$$/ | $$$$$$$$| $$  \__/
| $$      | $$  | $$ \____  $$| $$ | $$ | $$| $$  | $$| $$  | $$ /$$__  $$| $$      | $$_  $$ | $$_____/| $$      
|  $$$$$$$|  $$$$$$/ /$$$$$$$/| $$ | $$ | $$|  $$$$$$/| $$  | $$|  $$$$$$$|  $$$$$$$| $$ \  $$|  $$$$$$$| $$      
 \_______/ \______/ |_______/ |__/ |__/ |__/ \______/ |__/  |__/ \_______/ \_______/|__/  \__/ \_______/|__/      
)" << endl;


		setlocale(LC_ALL, "Russian");
		// Set CP1251 instead of default CP866 to output Cyrillic text.
		SetConsoleOutputCP(1251);
		wprintf(L"\tЯгізджан Явуз");
		SetConsoleOutputCP(1026);
		setlocale(LC_ALL, "Turkish");
		wprintf(L" (Yağızcan Yavuz)");
		SetConsoleOutputCP(866);
		cout << " - KH-221ia.e\n\n";
	}

	void tableValues() {
		TextTable t('-', '|', '+');

		t.add("Exercises");
		t.add("You can choose exercises from here");
		t.endOfRow();

		t.add("1");
		t.add("A Pair of Numbers");
		t.endOfRow();

		t.add("2");
		t.add("3D Point");
		t.endOfRow();

		t.add("3");
		t.add("Complex Number");
		t.endOfRow();

		t.add("4");
		t.add("Vector In N - Dimensional Space");
		t.endOfRow();

		t.add("5");
		t.add("Quadratic Equation");
		t.endOfRow();

		t.setAlignment(2, TextTable::Alignment::RIGHT);
		cout << t;
	}

	void windowSettings() {
		HWND hWnd;
		SetConsoleTitle(_T("Exercises Lab_1"));
		hWnd = FindWindow(NULL, _T("Exercises Lab_1"));
		HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD NewSBSize = GetLargestConsoleWindowSize(hOut);
		SMALL_RECT DisplayArea = { 0, 0, 0, 0 };

		SetConsoleScreenBufferSize(hOut, NewSBSize);

		DisplayArea.Right = NewSBSize.X - 1;
		DisplayArea.Bottom = NewSBSize.Y - 1;

		SetConsoleWindowInfo(hOut, TRUE, &DisplayArea);

		ShowWindow(hWnd, SW_MAXIMIZE);
	}

	void startScreen() {
		windowSettings();
		creator();
		tableValues();
	}
};
