#include <iostream>
#include "Complex.h"
using namespace std;


int main()
{
	Complex a;
	a.setReal(2.4);
	a.setImg(4.1);
	Complex b(3.2, -3.6);
	Complex c = a.addition(b);
	cout << "c = a.addition(b) = ";
	c.printComplex();
	c = additionTwo(a, b);
	cout << "c = additionTwo(a,b) = ";
	c.printComplex();
	Complex d(4.3, -2.3);
	Complex z[] = { a, b,c, d };
	Complex f = additionArray(z, 4);
	cout << "f = additionArray(z,4) = ";
	f.printComplex();

}