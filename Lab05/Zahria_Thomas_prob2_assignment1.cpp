#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	//problem 2
	double side;
	double pi = 3.141593;
	cout << "Enter the side: ";
	cin >> side;
	//getline(cin,side);
	//181.5/.3065
	double area = (6 * pow(side, 2)) / (4 * tan(pi/ 6));
	cout << "The area of the hexagon is : " << area << endl;
}