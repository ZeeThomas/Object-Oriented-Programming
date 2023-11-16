#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//problem 4
	int num;
	int sum = 0;
	string snum;
	cout << "Enter an integer between 0 and 1000000: ";
	cin >> num;
	snum = to_string(num);
	for (int i = snum.size() - 1; i >= 0; i--)
	{
		sum += num % 10;
		num = num / 10;
	}
	cout << "The sum of the digits is "<< sum << endl;
}