#include <iostream>;
#include <string>;
using namespace std;
int mpg()
{
	double driveDistance, mpg, ppg, costOfDrive;
	cout << "Enter the driving distance: ";
	cin >> driveDistance;
	cout << "Enter the miles per gallon: ";
	cin >> mpg;
	cout << "Enter price per gallon : ";
	cin >> ppg;
	cout.precision(6);
	costOfDrive = (900.5 / 25.5) * 3.55;
	cout << "The cost of driving is $" << costOfDrive << endl;
	return 0;

}
int main()
{
	int hourInSeconds = 60 * 60;
	double totalStudy = (13 * ((2 * (1.25 * hourInSeconds)) + (2.5 * hourInSeconds))) + (2 * (1 * hourInSeconds)) + (2 * hourInSeconds);
	string fName = "Zahria";
	string lName = "Thomas";
	cout << "First Name: " + fName << endl;
	cout << "Last Name: " + lName << endl;
	cout << "I am supposed to spend " << totalStudy << " seconds studying C++ Programming" << endl;

	mpg();
	return 0;
}