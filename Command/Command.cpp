#include <iostream>
#include <cmath>
#define f(x) exp(-x*-x)

using namespace std;


double Rectangles(double a,double b,int n);
double Trapezium(double a, double b, int c);
double Simpson(double a, double b, int c);


int main()
{
	setlocale(LC_ALL, "Russian");
	int userNumber = 0;
	do {
		int  choosemethod;
		double a, b, sum;
		int n;
		cout << " Enter your start data of functions = ";
		cin >> a;
		cout << "  Enter your end data of functions = ";
		cin >> b;
		cout << " Enter your coefficient = ";
		cin >> n;

		cout << "	IntegrationMethods \n" << endl;
		cout << " 1) Method of Rectangles \n";
		cout << " 2) Method of Trapezium  \n";
		cout << " 3) Method of Simpson \n" << endl;

	uncorrect: cout << " Your chose: ";
		cin >> choosemethod;
		cout << endl << endl;

		switch (choosemethod) {

		case 1:
			cout << "	Method of Rectangles\n" << endl << endl;
			sum = Rectangles(a, b, n);
			cout << sum << endl;
			break;

		case 2:
			cout << "	Method of Trapezium\n" << endl << endl;
			break;

		case 3:
			cout << "	Method of Simpson\n" << endl << endl;
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


double Rectangles(double a, double b, int n) {
	double sum = 0.0;
	double h = (a - b) / n; // find steps
	for (double i = a; i <= b; i++) {
		sum += h * f(a - h / 2);
	}
	return sum;
}