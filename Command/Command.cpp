﻿#include <iostream>
#include <cmath>
#define f(y) y*y

using namespace std;


void twoPoint(double x,double y,double h);
double threePoint(double a, double b, int c);
double second(double a, double b, int c);


int main()
{
	setlocale(LC_ALL, "Russian");
	int userNumber = 0;
	do {
		int  choosemethod;
		double x, h,y;
		
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
			twoPoint(x, y, h);
		
			break;

		case 2:
			cout << " First derivative by three-point methods \n" << endl << endl;
			break;

		case 3:
			cout << " The second derivative\n" << endl << endl;
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

void twoPoint(double x, double y, double h) {
	double resultFirstMethod = 0.0, resultSecondMethod = 0.0, resultThirdMethod = 0.0;


	
	resultFirstMethod = (f(x + h) - y * x) / h;
	resultSecondMethod = (y * x) - f(x - h) / h;
	resultThirdMethod = (f(x + h) - f(x - h)) / (2 * h);

	cout << "First method = " << resultFirstMethod << endl;
	cout << "Second method = " << resultSecondMethod << endl;
	cout << "Third method = " << resultThirdMethod << endl;

}



