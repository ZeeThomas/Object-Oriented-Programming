#include "Complex.h"
#include <iostream>
#include <string>
using namespace std;

Complex::Complex()
{
	real = 0;
	img = 0;
}

Complex::Complex(double r, double i)
{
	real = r;
	img = i;
}
double Complex::getReal()
{
	return real;
}
double Complex::getImg()
{
	return img;
}
void Complex::setReal(double r)
{
	real = r;
}
void Complex::setImg(double i)
{
	img = i;
}
void Complex::printComplex()
{
	if (img > 0)
	{
		cout << real << "+"<<img << "i" << endl;
	}
	else
	{
		cout << real << img << "i" << endl;

	}
	
}
Complex Complex::addition(Complex& comp)
{
	Complex n(real + comp.getReal(), img + comp.getImg());
	return n;
}
Complex additionTwo(Complex& comp1, Complex& comp2)
{
	Complex n(comp1.getReal() + comp2.getReal(), comp1.getImg() + comp2.getImg());
	return n;
}
Complex additionArray(Complex complexArray[], int size)
{
	double nR = 0.0;
	double nI = 0.0;

	for (int i = 0; i < size; i++)
	{
		nR += complexArray[i].getReal();
		nI += complexArray[i].getImg();
	}
	Complex n(nR, nI);
	return n;
}