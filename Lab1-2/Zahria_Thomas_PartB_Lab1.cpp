#include <iostream>
using namespace std;

int main()
{
	double driveDistance, mpg, ppg, costOfDrive;
	cout << "Enter the driving distance: ";
	cin >> driveDistance;
	cout << "\n Enter the miles per gallon: ";
	cin >> mpg;
	cout << "\n Enter price per gallon: ";
	cin >> ppg;
	cout.precision(6);
	costOfDrive = (900.5 / 25.5) * 3.55;
	return 0;

}