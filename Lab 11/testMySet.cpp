#include <iostream>
#include "MySet.h"
using namespace std;

int main()
{
	MySet a(20);
	a.insertElement(13);
	cout << "s1 =";
	a.printSet();
	a.insertElement(7);
	cout << "s1 =";
	a.printSet();
	a.insertElement(20);
	cout << "s1 =";
	a.printSet();
	a.insertElement(21);
	cout << "s1 =";
	a.printSet();
	a.deleteElement(22);
	cout << "s1 =";
	a.printSet();
	a.deleteElement(13);
	cout << "s1 =";
	a.printSet();
	MySet b(100);
	cout << "s2 =";
	b.printSet();
	MySet c(a);
	cout << "s3=";
	c.printSet();
	cout <<"s3.isEqualTo(s1) = " << c.isEqualTo(a) << endl;


}