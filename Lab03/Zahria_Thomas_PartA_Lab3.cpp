#include <iostream>
#include <string>
using namespace std;
string swapCase(const string & s)
{
	string n;
	for (int i = 0; i < s.size(); i++)
	{
		if (islower(s[i]) > 0)
		{
			n += toupper(s[i]);
		}
		else if(islower(s[i])<= 0)
		{
			n += tolower(s[i]);
		}
		else
		{
			n += s[i];
		}
	}
	return n;
}
int main()
{
	string userString;
	cout << "Enter a string: ";
	getline(cin, userString);
	cout<< swapCase(userString);
	return 0; 

	
	
}