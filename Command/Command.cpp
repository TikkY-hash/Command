#include <iostream>
#include <cmath>
#define f(x) exp(-x*-x)

using namespace std;


double twoPoint(double a,double b,int n);
double threePoint(double a, double b, int c);
double second(double a, double b, int c);


int main()
{
	setlocale(LC_ALL, "Russian");
	int userNumber = 0;
	do {
		int  choosemethod;
		

	
		cout << " 1) The first derivative by two-point methods \n";
		cout << " 2) The first derivative by three-point methods \n";
		cout << " 3) Finding the second derivative \n" << endl;

	uncorrect: cout << " Your chose: ";
		cin >> choosemethod;
		cout << endl << endl;

		switch (choosemethod) {

		case 1:
			cout << " First derivative by two-point methods \n" << endl << endl;
			
		
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


