#include <iostream>
#include <string>
using namespace std;
class Rectangle2D
{
public:
	double x;
	double y;
	double width;
	double height;
	Rectangle2D()
	{
		x = 0.0;
		y = 0.0;
		width = 1.0;
		height = 1.0;
	}
	Rectangle2D(double a, double b, double w, double h)
	{
		x = a;
		y = b;
		width = w;
		height = h;
	}

	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
	double getWidth()
	{
		return width;
	}
	double getHeight()
	{
		return height;
	}
	void setX(double a)
	{
		x = a;
	}
	void setY(double b)
	{
		y = b;
	}
	void setWidth(double w)
	{
		width = w;
	}
	void setHeight(double h)
	{
		height = h;
	}
	bool contains(double a, double b)
	{
		if (b < height && a < width)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool contains(const Rectangle2D& r)
	{
		double rh = r.height;
		double rw = r.width;
		if (rw < width && rh < height)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool overlaps(const Rectangle2D& r)
	{
		if ((r.height) < height || r.width < width)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
int main()
{
	//problem 4
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);
	cout << "r1.contains(3,3): " << r1.contains(3, 3) << endl;
	cout << "r1.contains(r2): " << r1.contains(r2) << endl;
	cout << "r1.overlaps(r3): " << r1.overlaps(r3) << endl;
}