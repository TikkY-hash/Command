#include <iostream>
#include <cmath>
#define f(y) y*y 

using namespace std;


void twoPoint(double x, double h);
void threePoint(double x, double y, double h);
void second(double x, double y, double h);
int tPy(double pm);


int main()
{
	setlocale(LC_ALL, "Russian");
	int userNumber = 0;
	do {
		int  choosemethod;
		double x, h, y;

		cout << "Enter your x ";
		cin >> x;
		cout << "Enter your y ";
		cin >> y;
		cout << "Enter your step ";
		cin >> h;


		cout << " 1) The first derivative by two-point methods \n";
		cout << " 2) The first derivative by three-point methods \n";
		cout << " 3) Finding the second derivative \n" << endl;

	uncorrect: cout << " Your chose: ";
		cin >> choosemethod;
		cout << endl << endl;

		switch (choosemethod) {

		case 1:
			cout << " First derivative by two-point methods \n" << endl << endl;
			twoPoint(x, h);

			break;

		case 2:
			cout << " First derivative by three-point methods \n" << endl << endl;
			threePoint(x, y, h);

			break;

		case 3:
			cout << " The second derivative\n" << endl << endl;
			second(x, y, h);

			break;

		default:
			cout << " Choose the correct option\n" << endl << endl;
			goto uncorrect;
		}

		cout << " Start over?" << endl << endl
			<< " 1 - Yes" << endl
			<< " 2 - No" << endl << endl
			<< " Your chose: ";
		cin >> userNumber;
		cout << endl << endl;
	} while (userNumber == 1);
}
//The second derivative
void second(double x, double y, double h) {
	double rez = 0.0;

	rez = (f(x + h) - 2 * f(x) + f(x - h)) / (h * h);

	cout << "Result = " << rez;
}


