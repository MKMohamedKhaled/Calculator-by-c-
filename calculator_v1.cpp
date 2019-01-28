//This Program create a simple calculator
#include <bits/stdc++.h>
using namespace std;

int main()
{
	double num1 = 0, num2 = 0 , result=0;
	int op = 0;


	StartPoint:
	cout << "Please Enter The Two numbers"<<endl;
	cin >> num1 >> num2;

	//check if the user enter correct numbers
	if (cin.fail()) {
		cout << "Plz Enter a correct numbers" << endl;
		cin.clear();
		cin.ignore(10000, '\n');
		goto StartPoint;
	}

    OperationPoint:
	//Menu of Operations
	cout << "Press 1 to add" << endl;
	cout << "Press 2 to subtract" << endl;
	cout << "Press 3 to multiply" << endl;
	cout << "Press 4 to divide" << endl;

	//conditions for operations
	cout << "Enter the number of operation : ";
	cin >> op;
	//check if op input is number
	if (cin.fail()) {
		cout << "Plz Enter a correct value" << endl;
		cin.clear();
		cin.ignore(10000,'\n');
		goto OperationPoint;
	}

	if (op == 1) {
		result = num1 + num2;
	}
	else if (op == 2) {
		result = num1 - num2;
	}
	else if (op == 3) {
		result = num1 * num2;
	}
	else if (op == 4) {
		//check if num2 is zero
		if (num2 == 0.0) {
			cout << "Can't divide by zero" << endl;
			goto StartPoint;
		}
		result = num1 / num2;
	}
	else {
		cout << "Plz enter number between 1 and 4" << endl;
		goto OperationPoint;
	}
	
	cout << "Result = " << result << endl;

	return 0;
}


