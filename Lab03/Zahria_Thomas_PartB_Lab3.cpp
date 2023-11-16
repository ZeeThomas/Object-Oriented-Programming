#include <iostream>
#include <string>
using namespace std;

int main()
{
	//part B
	int num = 5;
	int *p = &num;
	//print the val of the int number directly from the num variable
	cout << "The value of the num is " << num << endl;
	//print the val of the integer number indirectly from the p pointer
	cout << "The value of the num is " << *p << endl;
	//print the address of the int var directly from the num variable
	cout << "The address of the num is " << &num << endl;
	//print the address of the integer variable indirectly from the p point
	cout << "The address of the num is " << p << endl;
	//print the value of the p pointer
	cout << "The value of the p pointer is " << p << endl;
	//print the address of the p pointer
	cout << "The address of the p pointer i " << &p << endl;

}