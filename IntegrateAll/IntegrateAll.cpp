#include <iostream>
//use this so you don't have to place std in front of things
using namespace std;
//this is for comments
//constant variable
const double PI = 3.1515926;

int main()
{
	
	//Class Example 8/26/22
	//ways to print
	cout.put('A');
	cout << "A";

	//way to print and start a new line
	cout << "Weclcome to C++\n";
	cout << "Welcome to C++" << endl;
	//can define variables in any place in the function
	//as long as it's before calling. 
	int r = 2.3;
	
	//while statement
	while (true)
	{
		cout << "Enter the radius: " << endl;
		//how to grab memory from the user
		cin >> r;
		//if else statments
		if (r <= 0)
		{
			cout << "Please enter a positive radius" << endl;
		}
		if (r > 0)
		{
			break;
		}
	}
	//ways to define a variable int,short, char, double,etc. 
	double A;
	A = PI * r * r;
	double p = PI * r * 2;
	//use a switch statment to see if they are looking for Permimeter(p) or Area(a)
	char search;
	cout << "What are you looking for p or a? " << endl;
	cin >> search;
		switch (search)
		{
		case 'a':
			cout << "The Area of the circle" << endl;
			cout << "with radius " << r << " is " << A << endl;
			break;
		case 'A':
			cout << "The Area of the circle" << endl;
			cout << "with radius " << r << " is " << A << endl;
			break;
		case 'p':
			
			cout << "The permimeter of the circle "
				<< "with the radius " << r << " is "
				<< p << endl;
			break;
		case 'P':

			cout << "The permimeter of the circle "
				<< "with the radius " << r << " is "
				<< p << endl;
			break;
		default:
			cout << "please choose either p or a" << endl;
		}


	
	
	
	return 0;
}

