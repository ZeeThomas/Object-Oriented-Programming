#include "MyInteger.h"
#include <iostream>
using namespace std;
int MyInteger::numberOfObjects = 0;
int MyInteger::sumOfIntegers = 0;
double MyInteger::averageOfIntegers = 0.0;
MyInteger::MyInteger(int v)
{
	value = v;
	sumOfIntegers += v;
	numberOfObjects++;
}

int MyInteger::getValue() const
{
	return value;
}
bool MyInteger::isEven() const
{
	if (value % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool MyInteger::isOdd(int t)
{
	if (t % 2 != 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool MyInteger::equals(int t) const
{
	if (value == t)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool MyInteger::equals(const MyInteger& m)const
{
	if (value == m.getValue())
	{
		return true;
	}
	else
	{
		false;
	}
}
double MyInteger::getAverageOfIntegers()
{
	if (numberOfObjects == 0)
	{
		return 0;
	}
	else
	{
		averageOfIntegers = double(sumOfIntegers )/ double(numberOfObjects);
		return averageOfIntegers;
	}
	

}