

#include <iostream>

using namespace std;

class sums {

private:
	int size = 2;
	int a[3][2];
	int row, col, sum;
	int numbers[3][2];
	int answers[3];
	int total = 0;

public:



	void enterSixNumbers() {

		cout << "Please enter three pairs of numbers to calculate : " << endl;
		
		cout << "Please Enter elements in array of size " << size << "x" << size << endl << endl;
	}

	void storeAnswers() {

	}

	void getSum() {
		for (row = 0; row < size; row++)
		{
			cout << row+1 << " of 3 : ";
			for (col = 0; col < 2; col++)
			{
				cin >> a[row][col];
			}
		}
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < 2; col++)
			{
				cout << a[row][col] << " ";
			}
			cout << endl;
		}
		for (row = 0; row < size; row++)
		{
			sum = 0;
			for (col = 0; col < 2; col++)
			{
				sum = sum + a[row][col];
			}
			cout << "Sum of elements of Row: " << row + 1 << " is " << sum << endl;
		}
		for (col = 0; col < size; col++)
		{
			sum = 0;
			for (row = 0; row < 2; row++)
			{
				sum += a[row][col];
			}
			cout << "Sum of elements of Column: " << row + 1 << " is " << sum << endl;
		}
	}

};

int main()
{
	sums s;

	s.enterSixNumbers();
	s.getSum();
}
