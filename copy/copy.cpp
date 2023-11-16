#include <iostream>
using namespace std;

int main()
{
	int j = 2;
	int& i = j;

	i += 9;
	cout << "J is " << j << endl;
	cout << "I is " << i << endl;

	j = 6;
	cout << "J is " << j << endl;
	cout << "I is " << i << endl;
}