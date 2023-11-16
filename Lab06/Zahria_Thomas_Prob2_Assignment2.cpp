#include <iostream>
#include <string>
using namespace std;

int main()
{
	//problem 2
	int n;
	int max;
	int count= 1;
	cout << "Enter numbers: ";
	cin >> n;
	max = n;
	while (n != 0 && cin>>n)
	{
		//cin >> n;
		if (n > max)
		{
			max = n;
			count = 1;
		}
		else if (n == max)
		{
			count++;
		}

	}
	cout << "The largest number is " << max << endl;
	cout << "the ocurrence count of the largest number is " << count << endl;
	
}