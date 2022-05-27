#include <GLFW/glfw3.h> // This dll for OpenGL it draws lines etc. for 3D point
#include "TextTable.h"
#include <windows.h>
#include <locale.h>
#include <iostream>
#include <complex>     
#include <iomanip>
#include "Start.h"
#include "conio.h"
#include "tchar.h"
#include <vector>

using namespace std;

int againCount = 0;

class pairOfNumbers {
public:

	//This function is finding pairs. if there is no pair its creates his own pairs.
	void pairs() {

		char ask;

		cout << "Would you like to enter numbers or not ? [y/n] :";
		cin >> ask;
		if (ask == 'y')
		{
			int numbersToAdd, _numbers;
			int* arr;

			cout << "How many numbers do you want to add ?\n" << "Type : ";
			cin >> numbersToAdd;

			arr = new int[numbersToAdd];

			for (int i = 0; i < numbersToAdd; i++)
			{
				cin >> _numbers;
				arr[i] = _numbers;
			}

			// Nested loop for all pairs
			for (int i = 0; i < numbersToAdd; i++) {
				for (int j = 0; j < numbersToAdd; j++) {
					cout << "(" << arr[i] << ", " << arr[j] << ")" << ", ";
				}
			}
		}
		else
		{
			int numbersToAdd, _numbers, arrSize = rand() % 10 + 1, randomNumber;
			int* arr;

			numbersToAdd = arrSize;

			arr = new int[numbersToAdd];

			for (int i = 0; i < numbersToAdd; i++)
			{
				randomNumber = rand() % 100 + 1;
				arr[i] = randomNumber;
			}

			// Nested loop for all pairs
			for (int i = 0; i < numbersToAdd; i++) {
				for (int j = 0; j < numbersToAdd; j++) {
					cout << "(" << arr[i] << ", " << arr[j] << ")" << ", ";
				}
			}

		}

	}

};

class threeDPoint {
public:
	void threeD(float x, float y, float z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	float GetX() const
	{
		return this->x;
	}

	float GetY() const
	{
		return this->y;
	}

	float GetZ() const
	{
		return this->z;
	}

private:
	float x;
	float y;
	float z;

public:
	float _x, _y, _z, _x2, _y2, _z2;
	char _yn, _yn2;

	void read() {
		cout << "Triangle Coordinates  X : 1, Y : 1, Z : 0" << "Square Coordinates  X : 2, Y : 2, Z : 0" << endl;

		cout << "Set X Coordinate : ";
		cin >> _x;
		cout << "Set Y Coordinate : ";
		cin >> _y;
		cout << "Set Z Coordinate : ";
		cin >> _z;

		threeD(_x, _y, _z);
		cout << "\nX Coordinate : " << GetX() << "\nY Coordinate : " << GetY() << "\nZ Coordinate : " << GetZ() << endl;

		cout << "\nWould you like to draw these points ? [y/n] : ";
		cin >> _yn;
		if (_yn == 'y')
		{
			draw();
		}

		cout << "\nWould you like to calculate distances between another points? [y/n] : ";
		cin >> _yn2;
		if (_yn2 == 'y')
		{
			calculateDistances();
		}
	}

	int draw(void)
	{
		GLFWwindow* window;

		/* Initialize the library */
		if (!glfwInit())
			return -1;

		/* Create a windowed mode window and its OpenGL context */
		window = glfwCreateWindow(690, 420, "Drawed 3D Points", NULL, NULL);
		if (!window)
		{
			glfwTerminate();
			return -1;
		}

		/* Make the window's context current */
		glfwMakeContextCurrent(window);

		/* Loop until the user closes the window */
		while (!glfwWindowShouldClose(window))
		{
			/* Render here */
			//glClear(GL_COLOR_BUFFER_BIT);

			/* Swap front and back buffers */
			//glfwSwapBuffers(window);

			glClear(GL_COLOR_BUFFER_BIT);
			glBegin(GL_TRIANGLES);
			glColor3f(255, 0, 0);//rgb
			glVertex3f(0, 0, 0);
			glVertex3f(_x, 0, 0);
			glVertex3f(0, _y, 0);
			glEnd();

			glfwSwapBuffers(window);

			/* Poll for and process events */
			glfwPollEvents();
		}

		glfwTerminate();
		return 0;
	}

	void calculateDistances() {
		cout << "Set Second X Coordinate : ";
		cin >> _x2;
		cout << "Set Second Y Coordinate : ";
		cin >> _y2;
		cout << "Set Second Z Coordinate : ";
		cin >> _z2;

		float answer = sqrt(pow(_x2 - _x, 2) + pow(_y2 - _y, 2) + pow(_z2 - _z, 2) * 1.0);
		cout << "Distance between two 3D Points is : " << answer;
	}

};

class complexNumber {
public:
	void complexNumberMethod() {

		double xNumber, yNumber;

		cout << "Please Enter Numbers Like This [2.0 | 1.0 | 3.0]" << endl;
		cout << "Define X Number : ";
		cin >> xNumber;
		cout << "Define Y Number : ";
		cin >> yNumber;

		complex<double> difference = xNumber - yNumber;
		complex<double> quotient = xNumber / yNumber;
		complex<double> product = xNumber * yNumber;
		complex<double> sum = xNumber + yNumber;
		complex<double> cmp(xNumber, yNumber);

		cout << "The Difference :  " << difference << '\n';

		cout << "The Quotient :  " << quotient << '\n';

		cout << "The Product :  " << product << '\n';

		cout << "The Sum :  " << sum << '\n';

		cout << "Real part: " << real(cmp) << endl;

		cout << "Imaginary part: " << imag(cmp) << endl;

		cout << "The Absolute Value of " << cmp << " is : " << abs(cmp) << endl;

		cout << "The Argument of " << cmp << " is : " << arg(cmp) << endl;

		cout << "The Norm of " << cmp << " is : " << norm(cmp) << endl;

		cout << "The Conjugate of " << cmp << " is : " << conj(cmp) << endl;

		cout << "Square root of " << xNumber << " is : " << sqrt(complex<double>(xNumber, 0)) << endl;

		cout << "Square root of (" << xNumber << ",-0), the other side of the cut, is " << sqrt(std::complex<double>(xNumber, -0.0)) << endl;

	}
};

class vectorInNDimensionalSpace {
public:
	template<size_t dimcount, typename T>
	struct n_vector
	{
		typedef std::vector< typename n_vector<dimcount - 1, T>::type > type;
	};

	template<typename T>
	struct n_vector<0, T>
	{
		typedef T type;
	};

	n_vector<1, int>::type v1; //First Dimension
	n_vector<2, int>::type v2; //Second Dimension
	n_vector<3, int>::type v3; //Third Dimension
	n_vector<4, int>::type v4; //Fourth Dimension
	n_vector<5, int>::type v5; //Fifth Dimension

	void vectorNDimension() {
		v2.clear();
		using Column = std::vector<double>;
		char _op, sumYn, subYn, divYn, mulYn;
		int sum = 0, size, sub = 0, mul = 0;
		float divide = 0;

		cout << "Please Select Operation Type [+ | - | / | *] : ";
		cin >> _op;

		switch (_op)
		{
		case '+':
			//begin::Summing in Second Dimension

			cout << "Would you like to choose numbers or not ? [y/n] : ";
			cin >> sumYn;
			if (sumYn == 'n')
			{
				v2 = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9},
				{10, 11, 12},
				{13},
				};
			}
			else {
				cout << "Please insert number for vector size : ";
				cin >> size;

				cout << "\nPress 'x' when you finish." << endl;

				vector<int> numbersVec;
				string numbers;

				while (true)
				{
					cin >> numbers;
					if (numbers != "x")
					{
						for (int i = 0; i < size; i++)
						{
							numbersVec.push_back(stoi(numbers));
						}
						auto end = numbersVec.end();
						for (auto it = numbersVec.begin(); it != end; ++it) {
							end = std::remove(it + 1, end, *it);
						}

						numbersVec.erase(end, numbersVec.end());
					}
					else
					{
						break;
					}
				}

				size_t const size_per_column = numbersVec.size() / size;
				vector<Column> columned_data(size, vector<double>(size_per_column));
				cout << "All values inside of vector \n{ " << endl;

				for (size_t i = 0; i < size; i++)
				{
					for (size_t j = 0; j < size_per_column; j++)
					{
						columned_data[i][j] = numbersVec[i * size_per_column + j];
					}
				}
				numbersVec.clear();
				for (size_t i = 0; i < size; i++)
				{
					for (size_t j = 0; j < size_per_column; j++)
					{
						cout << columned_data[i][j] << ' ';
						numbersVec.push_back(columned_data[i][j]);
					}
					cout << '\n';
				}
				v2.push_back(numbersVec);

			}

			for (vector<int> v : v2)
			{
				//begin::Summing all of values inside vector
				for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
					sum += *it;
				}
				//end::Summing all of values inside vector
			}
			cout << "}" << endl;

			cout << "\nSum of all values inside vector : " << sum;
			//end::Summing in Second Dimension
			break;
		case '-':
			//begin::Subtraction in Second Dimension
			cout << "Would you like to choose numbers or not ? [y/n] : ";
			cin >> subYn;
			if (subYn == 'n')
			{
				v2 = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9},
				{10, 11, 12},
				{13},
				};
			}
			else {
				cout << "Please insert number for vector size : ";
				cin >> size;

				cout << "\nPress 'x' when you finish." << endl;

				vector<int> numbersVec;
				string numbers;

				while (true)
				{
					cin >> numbers;
					if (numbers != "x")
					{
						for (int i = 0; i < size; i++)
						{
							numbersVec.push_back(stoi(numbers));
						}
						auto end = numbersVec.end();
						for (auto it = numbersVec.begin(); it != end; ++it) {
							end = std::remove(it + 1, end, *it);
						}

						numbersVec.erase(end, numbersVec.end());
					}
					else
					{
						break;
					}
				}

				size_t const size_per_column = numbersVec.size() / size;
				vector<Column> columned_data(size, vector<double>(size_per_column));
				cout << "All values inside of vector \n{ " << endl;

				for (size_t i = 0; i < size; i++)
				{
					for (size_t j = 0; j < size_per_column; j++)
					{
						columned_data[i][j] = numbersVec[i * size_per_column + j];
					}
				}
				numbersVec.clear();
				for (size_t i = 0; i < size; i++)
				{
					for (size_t j = 0; j < size_per_column; j++)
					{
						cout << columned_data[i][j] << ' ';
						numbersVec.push_back(columned_data[i][j]);
					}
					cout << '\n';
				}
				v2.push_back(numbersVec);

			}

			for (vector<int> v : v2)
			{
				//begin::Subtraction all of values inside vector
				for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
					sub -= *it;
				}
				//end::Subtraction all of values inside vector
			}
			cout << "}" << endl;

			cout << "\nSum of all values inside vector : " << sub;
			//end::Subtraction in Second Dimension
			break;
		case '/':
			//begin::Dividing in Second Dimension,
			cout << "Would you like to choose numbers or not ? [y/n] : ";
			cin >> divYn;
			if (divYn == 'n')
			{
				v2 = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9},
				{10, 11, 12},
				{13},
				};
			}
			else {
				cout << "Please insert number for vector size : ";
				cin >> size;

				cout << "\nPress 'x' when you finish." << endl;

				vector<int> numbersVec;
				string numbers;

				while (true)
				{
					cin >> numbers;
					if (numbers != "x")
					{
						for (int i = 0; i < size; i++)
						{
							numbersVec.push_back(stoi(numbers));
						}
						auto end = numbersVec.end();
						for (auto it = numbersVec.begin(); it != end; ++it) {
							end = std::remove(it + 1, end, *it);
						}

						numbersVec.erase(end, numbersVec.end());
					}
					else
					{
						break;
					}
				}

				size_t const size_per_column = numbersVec.size() / size;
				vector<Column> columned_data(size, vector<double>(size_per_column));
				cout << "All values inside of vector \n{ " << endl;

				for (size_t i = 0; i < size; i++)
				{
					for (size_t j = 0; j < size_per_column; j++)
					{
						columned_data[i][j] = numbersVec[i * size_per_column + j];
					}
				}
				numbersVec.clear();
				for (size_t i = 0; i < size; i++)
				{
					for (size_t j = 0; j < size_per_column; j++)
					{
						cout << columned_data[i][j] << ' ';
						numbersVec.push_back(columned_data[i][j]);
					}
					cout << '\n';
				}
				v2.push_back(numbersVec);
			}

			for (vector<int> v : v2)
			{
				//begin::Divide all of values inside vector
				for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
					divide /= *it;
				}
				//end::Divide all of values inside vector
			}
			cout << "}" << endl;

			cout << "\nDivide total of all values inside vector : " << divide;
			//end::Dividing in Second Dimension
			break;
		case '*':
			//begin::Multiplying in Second Dimension
			cout << "Would you like to choose numbers or not ? [y/n] : ";
			cin >> mulYn;
			if (mulYn == 'n')
			{
				v2 = {
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9},
				{10, 11, 12},
				{13},
				};
			}
			else {
				cout << "Please insert number for vector size : ";
				cin >> size;

				cout << "\nPress 'x' when you finish." << endl;

				vector<int> numbersVec;
				string numbers;

				while (true)
				{
					cin >> numbers;
					if (numbers != "x")
					{
						for (int i = 0; i < size; i++)
						{
							numbersVec.push_back(stoi(numbers));
						}
						auto end = numbersVec.end();
						for (auto it = numbersVec.begin(); it != end; ++it) {
							end = std::remove(it + 1, end, *it);
						}

						numbersVec.erase(end, numbersVec.end());
					}
					else
					{
						break;
					}
				}

				size_t const size_per_column = numbersVec.size() / size;
				vector<Column> columned_data(size, vector<double>(size_per_column));
				cout << "All values inside of vector \n{ " << endl;

				for (size_t i = 0; i < size; i++)
				{
					for (size_t j = 0; j < size_per_column; j++)
					{
						columned_data[i][j] = numbersVec[i * size_per_column + j];
					}
				}
				numbersVec.clear();
				for (size_t i = 0; i < size; i++)
				{
					for (size_t j = 0; j < size_per_column; j++)
					{
						cout << columned_data[i][j] << ' ';
						numbersVec.push_back(columned_data[i][j]);
					}
					cout << '\n';
				}
				v2.push_back(numbersVec);

			}

			for (vector<int> v : v2)
			{
				//begin::Multiply all of values inside vector
				for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
					mul *= *it;
				}
				//end::Multiply all of values inside vector
			}
			cout << "}" << endl;

			cout << "\Multiplation of all values inside vector : " << mul;
			//end::Multiplying in Second Dimension
			break;
		}
	}
};

class quadraticEquation {
public:
	void quadric() {
		float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
		cout << "Enter coefficients a, b and c: " << endl;
		cin >> a >> b >> c;
		discriminant = b * b - 4 * a * c;

		if (discriminant > 0) {
			x1 = (-b + sqrt(discriminant)) / (2 * a);
			x2 = (-b - sqrt(discriminant)) / (2 * a);
			cout << "Roots are real and different." << endl;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}

		else if (discriminant == 0) {
			cout << "Roots are real and same." << endl;
			x1 = -b / (2 * a);
			cout << "x1 = x2 =" << x1 << endl;
		}

		else {
			realPart = -b / (2 * a);
			imaginaryPart = sqrt(-discriminant) / (2 * a);
			cout << "Roots are complex and different." << endl;
			cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
			cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
		}
	}
};

class tidyProgress {
public:

	start _s;

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
			cout << "Choose variant between 1-5 : ";
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

		tidyProgress _t;
		pairOfNumbers _p;
		threeDPoint _3d;
		complexNumber _c;
		vectorInNDimensionalSpace _v;
		quadraticEquation _q;

		switch (variantNumber)
		{
		case 1:
			methodDescription("1", "Create a class \"A pair of numbers\" with the necessary constructors and access functions.");
			_p.pairs();
			askAgain();
			break;
		case 2:
			methodDescription("2", "Create a class \"3D Point\" with the necessary constructors and access functions. Overload input / output operations.");
			_3d.read();
			askAgain();
			break;
		case 3:
			methodDescription("3", "Create a class \"Complex number\" with the necessary constructors and access functions. Overload operators + , -, *, / and input / output operations.");
			_c.complexNumberMethod();
			askAgain();
			break;
		case 4:
			methodDescription("4", "Create a class \"Vector in N - dimensional space\" with the necessary constructors and access functions. Overload operators + , -, *, / and input / output operations.");
			_v.vectorNDimension();
			askAgain();
			break;
		case 5:
			methodDescription("5", "Create a class \"Vector in N - dimensional space\" with the necessary constructors and access functions. Overload operators + , -, *, / and input / output operations.");
			_q.quadric();
			askAgain();
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
	start _s;
	tidyProgress _tidy;
	if (againCount == 0)
	{
		_s.startScreen();
		cout << "Choose variant between 1-5 : ";
		int variant;
		cin >> variant;
		system("cls");

		_tidy.chooseVariant(variant);
	}
	else {
		cout << "Choose variant between 1-5 : ";
		int variant;
		cin >> variant;
		system("cls");

		_tidy.chooseVariant(variant);
	}
}
