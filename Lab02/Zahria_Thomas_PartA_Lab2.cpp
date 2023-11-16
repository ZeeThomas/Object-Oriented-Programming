#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int getDigit(int n)
{
	string s = to_string(n);
	int digit = 0;
	for (int i = 0; i < s.size(); i++)
	{
		digit++;
	}
	return digit;
}
int main()
{
	int num;
	cout << "Enter an integer: ";
	cin >> num;
	cout<<getDigit(num);


}	