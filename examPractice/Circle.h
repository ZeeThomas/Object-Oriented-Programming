#pragma once
class Circle
{
public: 
	double radius;
	Circle()
	{
		radius = 1;
	}
	Circle(double newRadius)
	{
		radius = newRadius;
	}
	double getArea()
	{
		return 2 * 3.14 * radius;
	}
};
//factorial(6) = 720
//6 * factorial(5) = 720
//5* factorial(4) =  120
//4* factorial(3) = 24
// 3* factoria(2) = 6
//2 * factorial(1) =2
// 1 * factorial(0) = 1