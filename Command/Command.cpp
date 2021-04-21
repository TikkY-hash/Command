#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

void twoPoint(double x, double h);
void threePoint(double x, double h);
void second(double x, double h);
int tPy(double pm);


int main()
{
	setlocale(LC_ALL, "Russian");
	int userNumber = 0;
	double start, end;
	do {
		int  choosemethod;
		double x, h;

		cout << " Enter your x ";
		cin >> x;
		cout << " Enter your step ";
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
			start = clock();
			twoPoint(x, h);
			end = clock();

			cout << " The function finished executing in: " << end - start << " milliseconds " << endl;
			break;

		case 2:
			cout << " First derivative by three-point methods \n" << endl << endl;
			start = clock();
			threePoint(x, h);
			end = clock();

			cout << " The function finished executing in: " << end - start << " milliseconds " << endl;
			break;

		case 3:
			cout << " The second derivative\n" << endl << endl;
			start = clock();
			second(x, h);
			end = clock();

			cout << " The function finished executing in: " << end - start << " milliseconds " << endl;
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

void twoPoint(double x, double h) {
	double resultFirstMethod = 0.0, resultSecondMethod = 0.0, resultThirdMethod = 0.0, plus, minus, xxx, p, m;
	p = x + h;
	plus = tPy(p);
	m = x - h;
	minus = tPy(m);
	xxx = tPy(x);
	resultFirstMethod = (plus - xxx) / h;
	resultSecondMethod = (xxx - minus) / h;
	resultThirdMethod = (plus - minus) / (2 * h);
	cout << " First method = " << resultFirstMethod << endl;
	cout << " Second method = " << resultSecondMethod << endl;
	cout << " Third method = " << resultThirdMethod << endl;
}
int tPy(double pm) {
	double y;
	y = pm * pm;
	return y;
}

//First derivative by three-point methods
void threePoint(double x, double h) {
	double rez1 = 0.0, rez2 = 0.0, rez3 = 0.0, minus, plus, m, p;
	m = x - h;
	p = x + h;

	minus = tPy(m);
	plus = tPy(p);
	x = tPy(x);


	rez1 = (1 / (2 * h)) * (-3 * minus + 4 * x - plus);
	rez2 = (1 / (2 * h)) * (-minus + 0 * x + plus);
	rez3 = (1 / (2 * h)) * (minus - 4 * x + 3 * plus);

	cout << " 1 Method = " << rez1 << endl;
	cout << " 2 Method = " << rez2 << endl;
	cout << " 2 Method = " << rez3 << endl;
}


//The second derivative
void second(double x, double h) {
	double  rez, first, second, third;
	rez = 0.0;
	first = tPy(x + h);
	second = tPy(x - h);
	third = tPy(x);
	rez = (first - 2 * third + second) / (h * h);
	cout << " rez " << rez << endl;
}