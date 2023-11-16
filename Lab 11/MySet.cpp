#include "MySet.h"
#include <iostream>
using namespace std;

MySet::MySet(unsigned num)
{
	set = new bool[num + 1];
	size = 0;
	range = num;
	for (int i = 0; i <= num; i++)
	{
		//cout << i << endl;
		set[i] = false;
	}
}
MySet::MySet(const MySet& p)
{
	this->set = new bool[p.range + 1];
	this->size = p.size;
	range = p.range;
	for (int i = 0; i <= range; i++)
	{
		set[i] = p.set[i];
	}
}
MySet::~MySet()
{
	delete [] set;
}
void MySet::insertElement(int k)
{
	if (k > range)
	{
		cout << "Warning: " << k << " is out of range [0," << range << "]" << endl;

	}
	else
	{
		size++;
		set[k] = true;
	}
}
void MySet::deleteElement(int k)
{
	if (k > range)
	{
		cout << "Warning: "<< k <<" is out of range [0,"<<range<<"]" << endl;

	}
	else
	{
		size--;
		set[k] = false;
	}
}
void MySet::printSet()
{
	cout << "{";
	for (int i = 0; i <= range; i++)
	{
		if (set[i] == true)
		{
			cout << i << ", ";
		}
		
	}
	cout << "}" << endl;
}
bool MySet::isEqualTo(const MySet& n)
{
	for (int i = 0; i < range; i++)
	{
		if ((set[i] == true && n.set[i] != true) || (n.set[i] == true && set[i] != true))
		{
			return false;
		}
	}
	return true;
}