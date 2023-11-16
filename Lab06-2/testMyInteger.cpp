#include <iostream>
#include "MyInteger.h"
using namespace std;

int main()
{
	cout <<"The average of integers is " << MyInteger::getAverageOfIntegers() << endl;
	cout <<"isOdd(3) = " << MyInteger::isOdd(3) << endl;
	MyInteger i1(9323);
	MyInteger i2(147);
	MyInteger i3(9323);
	cout << "i1.isEven() = " << i1.isEven() << endl;
	cout << "i3.equals(843) = " << i3.equals(843) << endl;
	cout << "i1.equals(i3) = " << i1.equals(i3) << endl;
	cout << "The average of integers is " << MyInteger::getAverageOfIntegers() << endl;

}