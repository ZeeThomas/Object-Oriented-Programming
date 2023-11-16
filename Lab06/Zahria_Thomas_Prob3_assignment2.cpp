#include <iostream>
#include <string>
using namespace std;
void count(const string& v)
{
	int count = 0;
	string alpha = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < 26; i++)
	{
		count = 0;
		if (v.find_first_of(alpha[i]) != -1)
		{
			for (int x = 0; x < v.size(); x++)
			{
				if (alpha[i] == v[x])
				{
					count++;
				}
			}
			cout << alpha[i] << ": " << count << " times" << endl;
		}
	}
}
int main()
{
	//problem 3
	string s;
	cout << "Enter a string: ";
	getline(cin, s);
	string f = s;
	for (int i = 0; i < s.size(); i++)
	{
		f[i] = tolower(s[i]);
	}
	count(f);
}