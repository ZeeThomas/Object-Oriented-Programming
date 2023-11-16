#include <iostream>
#include <string>
using namespace std;

int evenCount(int z)
{
	int q = z;
	if (z < 10)
	{
		if (z % 2 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		q = z / 10;
		if ((z % 10) % 2 == 0)
		{
			return 1 + evenCount(q);
		}
		else
		{
			return 0 + evenCount(q);
		}
	}
}

int main()
{
	//problem 1
	int digit;
	cout << "Enter the number ";
	cin >> digit;
	cout << "The number of even digits is " << evenCount(digit) << endl;
}