#pragma once
#include <iostream>
using namespace std;
class Complex
{
private:
	double real;
	double img;
public:
	Complex();
	Complex(double r, double i);
	double getReal();
	double getImg();
	void setReal(double r);
	void setImg(double i);
	//inside class
	void printComplex();
	Complex addition(Complex& comp);
};

Complex additionTwo(Complex& comp1, Complex& comp2);
Complex additionArray(Complex complexArray[], int size);


