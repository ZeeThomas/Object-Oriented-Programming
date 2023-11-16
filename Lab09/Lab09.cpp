// Lab09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
class MyPoint
{
private: 
    double x;
    double y;
public: 
    MyPoint()
    {
        x = 0; 
        y = 0;
    }
    MyPoint(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    void setX(double x)
    {
        this->x = x;
    }
    void setY(double y)
    {
        this->y = y;
    }
    double getX() const
    {
        return x;
    }
    double getY() const
    {
        return y;
    }
    virtual double distance(const MyPoint &p2)
    {
        double distance = sqrt(((x - p2.getX()) * (x - p2.getX())) + ((y - p2.getY()) * (y - p2.getY())));
        return distance;
    }
    friend istream& operator>>(istream& os, const MyPoint& p);
    friend ostream& operator<<(ostream& os, const MyPoint& p);
};

istream& operator>>(istream& is, MyPoint& p)
{
    double r, n;
    cout << "Please enter x y: ";
    is >> r  >> n;
    p.setX(r);
    p.setY(n);
    return is;
}
ostream& operator<<(ostream& os, const MyPoint& p)
{
    cout << "(x,y) = (" << p.getX() << ", " << p.getY() << ")" << endl;;
    return os;
}

class ThreeDPoint : public MyPoint
{
    private:
        double z;
    public: 
        ThreeDPoint()
        {
            setX(0);
            setY(0);
            z = 0;

        }
        ThreeDPoint(double x, double y, double z)
        {
            setX(x);
            setY(y);
            this->z = z;
        }
        double getZ() const
        {
            return z;
        }
        void setZ(double z)
        {
            this->z = z;
        }
        double distance(const MyPoint& p)

        {
            double distance;
            const MyPoint* p2 = &p;
            const ThreeDPoint* p1 = dynamic_cast<const ThreeDPoint*>(p2);
            if (p1 != NULL)
            {
                 distance = sqrt(((getX() - p1->getX()) * (getX() - p1->getX())) + ((getY() - p1->getY()) * (getY() - p1->getY())) + ((z - p1->getZ()) *(z - p1->getZ())));
            }
            else
            {
                 distance = sqrt(((getX() - p.getX()) * (getX() - p.getX())) + ((getY() - p.getY()) * (getY() - p.getY())) + ((z - 0) * (z - 0)));

            }
            return distance;
        }
        friend istream& operator>>(istream& os, const ThreeDPoint& p);
        friend ostream& operator<<(ostream& os, const ThreeDPoint& p);
};
istream& operator>>(istream& is, ThreeDPoint& p)
{
    double r, n, t;
    cout << "Please enter x y z: ";
    is >> r >> n >> t;
    p.setX(r);
    p.setY(n);
    p.setZ(t);
    return is;
}
ostream& operator<<(ostream& os, const ThreeDPoint& p)
{
    cout << "(x,y, z) = (" << p.getX() << ", " << p.getY() << ", " << p.getZ() << ")" << endl;
    return os;
}
int main()
{
    cout << "1.Test the constructors of ThreeDPoint: " << endl;
    cout << "Create a ThreeDPoint obj p1 with no arg constructor:" << endl;
    ThreeDPoint p1;
    cout << "p1 is (x,y,z) = (" << p1.getX() << "," << p1.getY() << "," << p1.getZ() << ")" << endl;
    cout << "Create a ThreeDPoint obj p2 with 3-args constructor:" << endl;
    ThreeDPoint p2(10,30,25.5);
    cout << "p1 is (x,y,z) = (" << p2.getX() << "," << p2.getY() << "," << p2.getZ() << ")" << endl;
    cout << "2. Test the distance function: " << endl;
    cout << "The distance between p1 and p2 is " << p1.distance(p2) << endl;
    cout << "3. Test the insertion and extraction operators:" << endl;
    cout << "Create a ThreeDPoint object p3 and p4 with the no arg constructor:" << endl;
    ThreeDPoint p3, p4;
    cin >> p3;
    cout << p3;
    cout << "P3 is ";
    cin >> p4;
    cout << "P4 is ";
    cout << p4;
    cout << "Test the distance function: " << endl;
    cout << "The distance between p3 and p4 is " << p3.distance(p4) << endl;
    cout << "Create ThreeDPoint p5 and MyPoint p6, then use << to print p5 and p6:" << endl;
    ThreeDPoint p5;
    MyPoint p6;
    cin >> p5;
    cout << p5;
    cin >> p6;
    cout << p6;
    cout << "The distance between p5 and p6 is " << p5.distance(p6) << endl;

}

