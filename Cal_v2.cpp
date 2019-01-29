// Cal_V2.cpp : This file contains the 'main' function. Program execution begins and ends there.\

#include <bits/stdc++.h>
using namespace std;


void cal();

//function to read two numbers
void readTwoNumbers(double &num1 , double &num2) {
	while (true) {
		num1 = num2 = 0;
		cout << "####Plz Enter two Numbers####" << endl;
		cin >> num1 >> num2;

		if (cin.fail()) {
			cout << "Plz Enter correct Numbers" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else
			break;
	}

}

int menu() {
	cout << "Menu Operations :" << endl;
	cout << "\tPress 1 to add" << endl;
	cout << "\tPress 2 to subtract" << endl;
	cout << "\tPress 3 to multiply" << endl;
	cout << "\tpress 4 to divide" << endl;


	int op = 0;

	cout << "Plz Enter a number of operation" << endl;
	cin >> op;
	if (cin.fail()) {
		cout << "Plz Enter correct Number between 1 and 4" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		return menu();
	}
	return op;
}


double sum(double n1 , double n2) {
	return n1 + n2;
}

double subtract(double n1, double n2) {
	return n1 - n2;
}

double mul(double n1, double n2) {
	return n1 * n2;
}

double div(double n1, double n2) {
	if (n2 == 0) {
		cout << "Can't divide by zero" << endl;
		cal();
	}

	return n1 / n2;
}


void cal() {
	double num1 = 0, num2 = 0, res = 0;
	int op = 0;

	readTwoNumbers(num1, num2);
	op = menu();

	if (op == 1) {
		res = sum(num1, num2);
	}

	else if (op == 2) {
		res = subtract(num1, num2);
	}

	else if (op == 3) {
		res = mul(num1, num2);
	}

	else {
		res = div(num1, num2);
	}

	cout << "Result = " << res;
}

int main()
{
	cout << "\t\tWelcome To Caluculator System\t\t" << endl;
	cal();
	return 0;
}
