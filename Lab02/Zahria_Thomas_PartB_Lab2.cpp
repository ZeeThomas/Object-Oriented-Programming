#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	double base = 3.280;
	cout << setprecision(3) << showpoint << left;
	cout << setw(10) << "Meters" << setw(10) << "Feet" << endl;
	for (int i = 1; i < 15; i++)
	{
		cout << setw(10) << i << setw(10);
		cout << double(base * i) << endl;
	}
	return 0;
}