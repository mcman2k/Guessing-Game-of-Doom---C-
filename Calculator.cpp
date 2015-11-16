#include <iomanip>
#include <iostream>
#include <math.h>
#include <vector>
#include <fstream>

using namespace std;

//Math Calculator

int main()
{
	int option, num1, num2;
	
	cout << "MATH CALCULATOR 2014" << endl << endl;
	cout << "1] Addition" << endl << "2] Subtraction" << endl << "3] Division" << endl << "4] Modulus" << endl;

	while(option != 0)
	{
		cout << endl << "Please enter an option (5 to quit): ";
			
		cin >> option;

		if(option >= 6)
		{
			cout << "Sorry, that is not an available option..." << endl;
		}
			
		if(option == 1)
		{
			cout << endl;
			cout << "Input first number: ";
			cin >> num1;
			cout << "Input second number: ";
			cin >> num2;
			int sum = num1 + num2;
			cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "." << endl;
		}
	
		if(option == 2)
		{
			cout << endl;
			cout << "Input first number: ";
			cin >> num1;
			cout << "Input second number: ";
			cin >> num2;
			int diff = (num1 - num2);
			cout << "The difference of " << num1 << " and " << num2 << " is " << diff << "." << endl;
		}

		if(option == 3)
		{
			cout << endl;
			cout << "Input first number: ";
			cin >> num1;
			cout << "Input second number: ";
			cin >> num2;
			int quot = (num1 / num2);
			cout << "The quotient of " << num1 << " and " << num2 << " is " << quot << "." << endl;
		}
		if(option == 4)
		{
			cout << endl;
			cout << "Input first number: ";
			cin >> num1;
			cout << "Input second number: ";
			cin >> num2;
			int mod = (num1 % num2);
			cout << num1 << " mod " << num2 << " is " << mod << "." << endl;
		}
		
		else if(option == 5)
		{
			cout << endl << endl << "Have a good day!";
			break;
		}			
	}
	
return 0;

}


