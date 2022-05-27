#include <iostream>
#include <iomanip>
#include "TextTable.h"
#include "Start.h"
#include <locale.h>
#include <windows.h>
#include "conio.h"
#include "tchar.h"

using namespace std;

int againCount = 0;

class variations {
public:

	start _s;

	void iAmTheOne() {
		methodDescription("1", "All elements with odd values should be doubled");

		// initializing the 2-dimensional array
		int x[2][3] =
		{
			{ {1}, {2}, {3} },
			{ {4}, {5}, {6} },
		};

		// output each element's value
		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				string evenOdd = (x[i][j] % 2 == 0) ? "Even" : "Odd";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << evenOdd << "] " << endl;

				if (x[i][j] % 2 != 0) {
					int doubled = x[i][j] * 2;
					//cout << x[i][j] << " is odd." << endl;
					cout << "Double of " << x[i][j] << " = " << doubled << endl;
				}

			}
		}

		askAgain();
	}

	void second() {
		methodDescription("2", "All elements with even values should be replaced with their squares");

		int x[2][3] =
		{
			{ {1}, {2}, {3} },
			{ {4}, {5}, {6} },
		};

		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				string evenOdd = (x[i][j] % 2 == 0) ? "Even" : "Odd";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << evenOdd << "] " << endl;

				if (x[i][j] % 2 == 0) {
					int squared = x[i][j] * x[i][j];
					cout << "Square of " << x[i][j] << " = " << squared << endl;
				}
			}
		}

		askAgain();
	}

	void third() {
		methodDescription("3", "All elements with null value should be replaced with ones");

		int x[3][3] =
		{
			{ {NULL}, {2}, {3} },
			{ {4}, {NULL}, {6} },
			{ {7}, {8}, {NULL} },
		};

		//detect and change NULL values
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				int randomNumber = rand() % 100 + 1;
				string nullOrNot = (x[i][j] == NULL) ? "Null" : "Not Null";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << nullOrNot << "] " << endl;

				if (x[i][j] == NULL) {
					x[i][j] = randomNumber;

				}
			}
		}

		cout << "\nAfter Changed NULL Values" << "\n" << endl;

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << endl;

				if (x[i][j] == NULL) {
					cout << "Changed from NULL to : " << x[i][j] << endl;
				}
			}
		}

		askAgain();
	}

	void fourth() {
		methodDescription("4", "All elements with even values should be doubled");

		int x[2][3] =
		{
			{ {1}, {2}, {3} },
			{ {4}, {5}, {6} },
		};

		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				string evenOdd = (x[i][j] % 2 == 0) ? "Even" : "Odd";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << evenOdd << "] " << endl;

				if (x[i][j] % 2 == 0) {
					int doubled = x[i][j] * 2;
					cout << "Double of " << x[i][j] << " = " << doubled << endl;
				}

			}
		}

		askAgain();
	}

	void fifth() {
		methodDescription("5", "All elements should be replaced with their absolute magnitudes");

		int x[3][3] =
		{
			{ {-69}, {2}, {-3} },
			{ {4}, {-31}, {6} },
			{ {-420}, {52}, {-20} },
		};

		//Change negative numbers with their absolute magnitudes.Before that show all negatives
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				string negativeOrPositive = (x[i][j] > 0) ? "Poisitive" : "Negative";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << negativeOrPositive << "] " << endl;

				if (x[i][j] < 0) {
					x[i][j] = abs(x[i][j]);
				}

			}
		}

		cout << "\nAfter Changed Negatives" << "\n" << endl;

		//Show all changes
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				string negativeOrPositive = (x[i][j] > 0) ? "Poisitive" : "Negative";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << negativeOrPositive << "] " << endl;
			}
		}

		askAgain();
	}

	void sixth() {
		methodDescription("6", "All elements with even values should be tripled");

		int x[3][5] =
		{
			{ {1}, {2}, {3}, {4}, {5} },
			{ {6}, {7}, {8}, {9}, {10} },
			{ {11}, {12}, {13}, {14}, {15} },
		};

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				string evenOdd = (x[i][j] % 2 == 0) ? "Even" : "Odd";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << evenOdd << "] " << endl;

				if (x[i][j] % 2 == 0) {
					int tripled = x[i][j] * 3;
					cout << "Triple of " << x[i][j] << " = " << tripled << endl;
				}

			}
		}

		askAgain();
	}

	void seventh() {
		methodDescription("7", "All positive elements should be replaced with integer parts of their Briggs (base ten) logarithms");

		/*int x[3][3] =
		{
			{ {-69}, {2}, {-3} },
			{ {4}, {-31}, {6} },
			{ {-420}, {52}, {-20} },
		};*/

		float x[3][3] =
		{
			{ {-69}, {2}, {-3} },
			{ {4}, {-31}, {6} },
			{ {-420}, {52}, {-20} },
		};

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				string negativeOrPositive = (x[i][j] > 0) ? "Poisitive" : "Negative";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << negativeOrPositive << "] " << endl;

				if (x[i][j] > 0) {
					x[i][j] = log10(x[i][j]);
				}

			}
		}

		cout << "\nAfter Changed Briggs" << "\n" << endl;

		//Show all changes
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				string negativeOrPositive = (x[i][j] > 0) ? "Poisitive" : "Negative";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << negativeOrPositive << "] " << endl;


			}
		}

		askAgain();
	}

	void eighth() {
		methodDescription("8", "All negative elements should be replaced with their squares");

		int x[3][3] =
		{
			{ {-69}, {2}, {-3} },
			{ {4}, {-31}, {6} },
			{ {-420}, {52}, {-20} },
		};

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				string negativeOrPositive = (x[i][j] > 0) ? "Poisitive" : "Negative";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << negativeOrPositive << "] " << endl;

				if (x[i][j] < 0) {
					int squared = x[i][j] * x[i][j];
					cout << "Square of " << x[i][j] << " = " << squared << endl;
				}
			}
		}

		askAgain();
	}

	void ninth() {
		methodDescription("9", "All positive elements should be replaced with integer parts of their Napierian (natural) logarithms");

		/*int x[3][3] =
		{
			{ {-69}, {2}, {-3} },
			{ {4}, {-31}, {6} },
			{ {-420}, {52}, {-20} },
		};*/

		float x[3][3] =
		{
			{ {-69}, {2}, {-3} },
			{ {4}, {-31}, {6} },
			{ {-420}, {52}, {-20} },
		};

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				string negativeOrPositive = (x[i][j] > 0) ? "Poisitive" : "Negative";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << negativeOrPositive << "] " << endl;

				if (x[i][j] > 0) {
					x[i][j] = log(x[i][j]);
				}

			}
		}

		cout << "\nAfter Changed Napierian" << "\n" << endl;

		//Show all changes
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				string negativeOrPositive = (x[i][j] > 0) ? "Poisitive" : "Negative";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << negativeOrPositive << "] " << endl;


			}
		}

		askAgain();
	}

	void tenth() {
		methodDescription("10", "All positive elements should be replaced with integer parts of their square roots");

		int x[4][3] =
		{
			{ {25}, {2}, {-3} },
			{ {4}, {-31}, {6} },
			{ {-420}, {52}, {-20} },
			{ {100}, {121}, {36} },
		};

		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				string negativeOrPositive = (x[i][j] > 0) ? "Poisitive" : "Negative";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << negativeOrPositive << "] " << endl;

				if (x[i][j] > 0) {
					x[i][j] = sqrt(x[i][j]);
				}

			}
		}

		cout << "\nAfter Changed Napierian" << "\n" << endl;

		//Show all changes
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				string negativeOrPositive = (x[i][j] > 0) ? "Poisitive" : "Negative";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << negativeOrPositive << "] " << endl;


			}
		}

		askAgain();
	}

	void eleventh() {
		methodDescription("11", "All positive elements with even values should be doubled");

		int x[3][5] =
		{
			{ {-2}, {2}, {3}, {4}, {5} },
			{ {6}, {7}, {8}, {-10}, {10} },
			{ {-12}, {12}, {13}, {14}, {15} },
		};

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				string evenOdd = (x[i][j] % 2 == 0) ? "Even" : "Odd";
				string positiveOrNegative = (x[i][j] > 0) ? "Positive" : "Negative";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << evenOdd << "] " << " [" << positiveOrNegative << "] " << endl;

				if (x[i][j] % 2 == 0 && x[i][j] > 0) {
					int tripled = x[i][j] * 2;
					cout << "Triple of " << x[i][j] << " = " << tripled << endl;
				}

			}
		}

		askAgain();
	}

	void twelfth() {
		methodDescription("12", "All negative elements with odd values should be tripled");

		int x[3][5] =
		{
			{ {-1}, {2}, {-3}, {4}, {5} },
			{ {6}, {7}, {8}, {-9}, {10} },
			{ {-11}, {12}, {13}, {14}, {-15} },
		};

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				string evenOdd = (x[i][j] % 2 == 0) ? "Even" : "Odd";
				string positiveOrNegative = (x[i][j] > 0) ? "Positive" : "Negative";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << evenOdd << "] " << " [" << positiveOrNegative << "] " << endl;

				if (x[i][j] % 2 != 0 && x[i][j] < 0) {
					int tripled = x[i][j] * 3;
					cout << "Triple of " << x[i][j] << " = " << tripled << endl;
				}

			}
		}

		askAgain();
	}

	void thirteenth() {
		methodDescription("13", "All negative elements with odd values should be doubled");

		int x[3][5] =
		{
			{ {-1}, {2}, {-3}, {4}, {5} },
			{ {6}, {7}, {8}, {-9}, {10} },
			{ {-11}, {12}, {13}, {14}, {-15} },
		};

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				string evenOdd = (x[i][j] % 2 == 0) ? "Even" : "Odd";
				string positiveOrNegative = (x[i][j] > 0) ? "Positive" : "Negative";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << evenOdd << "] " << " [" << positiveOrNegative << "] " << endl;

				if (x[i][j] % 2 != 0 && x[i][j] < 0) {
					int tripled = x[i][j] * -2;
					cout << "Double of " << x[i][j] << " = " << tripled << endl;
				}

			}
		}

		askAgain();
	}

	void fourteenth() {
		methodDescription("14", "All positive elements with even values should be tripled");

		int x[3][5] =
		{
			{ {-2}, {2}, {3}, {4}, {5} },
			{ {6}, {7}, {8}, {-10}, {10} },
			{ {-12}, {12}, {13}, {14}, {15} },
		};

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				string evenOdd = (x[i][j] % 2 == 0) ? "Even" : "Odd";
				string positiveOrNegative = (x[i][j] > 0) ? "Positive" : "Negative";

				cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << evenOdd << "] " << " [" << positiveOrNegative << "] " << endl;

				if (x[i][j] % 2 == 0 && x[i][j] > 0) {
					int tripled = x[i][j] * 3;
					cout << "Triple of " << x[i][j] << " = " << tripled << endl;
				}

			}
		}

		askAgain();
	}

	void askAgain() {

		char again;

		cout << "\n Do you want to choose another variant ? [y/n] : ";
		cin >> again;
		bool isAgained;
		(again == 'y') ? isAgained = 1 : isAgained = 0;
		switch (isAgained)
		{
		case 0:
			system("exit");
			break;
		case 1:
			tidyStep();
			againCount++;
			cout << "Choose variant between 1-14 : ";
			int variant;
			cin >> variant;
			system("cls");

			chooseVariant(variant);
			break;
		default:
			break;
		}
	}

	void chooseVariant(int variantNumber) {

		variations _v;

		switch (variantNumber)
		{
		case 1:
			//All elements with odd values should be doubled
			_v.iAmTheOne();
			break;
		case 2:
			//All elements with even values should be replaced with their squares
			_v.second();
			break;
		case 3:
			//All elements with null value should be replaced with ones
			_v.third();
			break;
		case 4:
			//All elements with even values should be doubled
			_v.fourth();
			break;
		case 5:
			//All elements should be replaced with their absolute magnitudes
			_v.fifth();
			break;
		case 6:
			//All elements with even values should be tripled
			_v.sixth();
			break;
		case 7:
			//All positive elements should be replaced with integer parts of their Briggs (base ten) logarithms
			_v.seventh();
			break;
		case 8:
			//All negative elements should be replaced with their squares
			eighth();
			break;
		case 9:
			//All positive elements should be replaced with integer parts of their Napierian (natural) logarithms
			ninth();
			break;
		case 10:
			//All positive elements should be replaced with integer parts of their square roots
			tenth();
			break;
		case 11:
			//All positive elements with even values should be doubled
			eleventh();
			break;
		case 12:
			//All negative elements with odd values should be tripled
			twelfth();
			break;
		case 13:
			//All negative elements with odd values should be doubled
			thirteenth();
			break;
		case 14:
			//All positive elements with even values should be tripled
			fourteenth();
			break;
		default:
			break;
		}

	}

	void tidyStep() {
		system("cls");
		_s.startScreen();
	}

	void methodDescription(string number, string name) {

		cout << number << " - " << name << "\n" << endl;

	}

};

void main() {

	variations _v;
	start _s;

	if (againCount == 0)
	{
		_s.startScreen();
		cout << "Choose variant between 1-14 : ";
		int variant;
		cin >> variant;
		system("cls");

		_v.chooseVariant(variant);
	}
	else {
		cout << "Choose variant between 1-14 : ";
		int variant;
		cin >> variant;
		system("cls");

		_v.chooseVariant(variant);
	}
}
