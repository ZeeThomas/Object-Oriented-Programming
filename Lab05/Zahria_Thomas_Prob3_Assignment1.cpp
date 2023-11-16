#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//problem 3
	string s;
	string result;
	cout << "Enter a string: ";
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		if (i % 2 != 0)
		{
			result += s[i];
		}
	}
	cout << result << endl;
	
}