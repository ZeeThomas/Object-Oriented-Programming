#include "Circle2D.h"
#include <cmath>
#include <iostream>
using namespace std;
int Circle2D::numberOfCircles = 0;

Circle2D::Circle2D(double a, double b, double r)
{
	x = a;
	y = b;
	radius = r;
	numberOfCircles += 1;
}
Circle2D::Circle2D(const Circle2D& circle)
{
	x = circle.getX();
	y = circle.getY();
	radius = circle.getRadius();
	numberOfCircles += 1;
}
Circle2D::~Circle2D()
{
	numberOfCircles--;
}
double Circle2D::getX() const
{
	return x;
}
double Circle2D::getY() const
{
	return y;
}
double Circle2D::getRadius() const
{
	return radius;
}
int Circle2D::getNumberOfCircles()
{
	return numberOfCircles;
}
bool Circle2D::overlaps(const Circle2D& circle) const
{
	double d = sqrt((pow(x - circle.getX(), 2)) + (pow(y - circle.getY(), 2)));
	double sum = radius + circle.getRadius();
	//cout << d << endl;
	//cout << sum << endl;
	if (d <= sum)
	{
		return true;
	}
	else
	{
		return false;
	}
}
