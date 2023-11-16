#include "Circle2D.h"
#include <iostream>
using namespace std;


int main()
{
	Circle2D* pCir1 = new Circle2D(2,2,5.5);

	cout << "pCir1 is created with center at (" << pCir1->getX() << "," << pCir1->getY() << ") and radius of " << pCir1->getRadius() << endl;
	Circle2D cir2(-6, 3, 1.5);
	cout << "cir2 is created with center at (" << cir2.getX() << "," << cir2.getY() << ") and radius of " << cir2.getRadius() << endl;

	cout << "The current number of Circles is " << Circle2D::getNumberOfCircles() << endl;
	Circle2D cir3(cir2);
	cout << "cir3 is copied from cir2 with center at (" << cir3.getX() << "," << cir3.getY() << ") and radius of " << cir3.getRadius() << endl;
	cout << "The current number of Circles is " << cir3.getNumberOfCircles() << endl;
	cout << "pCir1 overlaps cir2 = " << pCir1 ->overlaps(cir2) << endl;
	cout << "cir3 overlaps cir2 = " << cir3.overlaps(cir2) << endl;
	delete pCir1;
	cout << "pCir1's memory is freed" << endl;
	cout << "The current number of circles is " << Circle2D::getNumberOfCircles() << endl;
	return 0;
	
}