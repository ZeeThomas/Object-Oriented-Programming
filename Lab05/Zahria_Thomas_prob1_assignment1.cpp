#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	//problem 1
	int num;
	cout << "Enter an integer number to see if the given number is divisible by 4 or not: ";
	cin >> num;

	if (num < 0)
	{
		cout << "The program doesn't accept negative numbers" << endl;
	}
	else if (num <= 100)
	{
		if (num % 4 != 0)
		{
			cout << "The given number (" << num << ") is not divisible by 4" << endl;
			cout << "Quotient: " << int(num / 4) << " and Remainder:  " << num - int(num / 4) * 4 << endl;
		
		}
		else
		{
			cout << "The given number (" << num << ") is divisible by 4" << endl;
			cout << "Quotient: " << int(num / 4) << " and Remainder:  " << num % 4<< endl;
		}
	}
	else if (num > 100)
	{
		cout << "The entered number is greater than 100 and square root of the number is: " << sqrt(num) << endl;
	}
	return 0;
}