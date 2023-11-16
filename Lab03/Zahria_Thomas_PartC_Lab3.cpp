#include <iostream>
#include <string>
using namespace std;

int main()
{//part C
	double n[6];
	//string n;
	double sum = 0;
	cout << "Please enter six double numbers ";
	cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4] >> n[5];

	for (int i = 0; i < 6; i++)
	{
		if ((i + 1) % 2 == 0)
		{
			//cout << n[i] << endl;
			sum += n[i];
		}
	}
	cout << "Sum of values at even location: " << sum << endl;
}