#include <iostream>
#include <iomanip>
#include "TextTable.h"
#include <locale.h>
#include <windows.h>
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

		t.add("Index of Variant");
		t.add("Rule of a source array transformation");
		t.endOfRow();

		t.add("1");
		t.add("All elements with odd values should be doubled");
		t.endOfRow();

		t.add("2");
		t.add("All elements with even values should be replaced with their squares");
		t.endOfRow();

		t.add("3");
		t.add("All elements with null value should be replaced with ones");
		t.endOfRow();

		t.add("4");
		t.add("All elements with even values should be doubled");
		t.endOfRow();

		t.add("5");
		t.add("All elements should be replaced with their absolute magnitudes");
		t.endOfRow();

		t.add("6");
		t.add("All elements with even values should be tripled");
		t.endOfRow();

		t.add("7");
		t.add("All positive elements should be replaced with integer parts of their Briggs (base ten) logarithms");
		t.endOfRow();

		t.add("8");
		t.add("All negative elements should be replaced with their squares");
		t.endOfRow();

		t.add("9");
		t.add("All positive elements should be replaced with integer parts of their Napierian (natural) logarithms");
		t.endOfRow();

		t.add("10");
		t.add("All positive elements should be replaced with integer parts of their square roots");
		t.endOfRow();

		t.add("11");
		t.add("All positive elements with even values should be doubled");
		t.endOfRow();

		t.add("12");
		t.add("All negative elements with odd values should be tripled");
		t.endOfRow();

		t.add("13");
		t.add("All negative elements with odd values should be doubled");
		t.endOfRow();

		t.add("14");
		t.add("All positive elements with even values should be tripled");
		t.endOfRow();


		t.setAlignment(2, TextTable::Alignment::RIGHT);
		cout << t;
	}

	void windowSettings() {
		HWND hWnd;
		SetConsoleTitle(_T("Lab_1"));
		hWnd = FindWindow(NULL, _T("Lab_1"));
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
