//Jenna Lambert
//Lab 5.2
#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//declare variables and formatting
	int x, p = 0, n = 0, s = 0, c = 0;
	double a;
	cout << setprecision(2) << fixed;

	//loop
	do{
		cout << "Enter and ineger, enter 0 to exit: ";
		cin >> x;
		if (x > 0) {
			p++;
			s = s + x;
			c++;
		}
		else if (x < 0) {
			n++;
			s = s + x;
			c++;
		}
		else if (x == 0) {
			cout << "You have entered 0\n";
		}
		else
			cout << "Invalid Input!\n";
	} while (x != 0);
	a = s / c;
	cout << "Number of positive numbers: " << p << "\n" << "Number of negative numbers: " << n << "\n" << "The sum of all numbers: " << s << "\n" << "The average of all the numbers: " << a << "\n";
}