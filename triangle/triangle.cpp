#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double iangle(double f, double s1, double s2)
{
	double ang;
	const double PI = 3.145926;
	ang = acos((pow(s1, 2) + pow(s2, 2) - pow(f, 2)) / (2 * s1 * s2));
	ang = ang * 180.0 / PI;
	return ang;
}
double area(double a, double b, double c)
{
	double ar; 
	double s = (a + b + c) / 2;
		ar = sqrt(s* ((s - a) * (s - b) * (s - c)));
}
int main()
{	//step 6. 
	double A, B, C;//internal angles of triangle
	double a, b, c;//three sides of triangle
	double area;
	bool legal = true;
	char cmd;
	while (true)
	{
		cout << "Triangle Guru!" << endl;
		//7. User Input
		cout << "Please enter a command: " << endl;
		cin >> cmd;
		switch (cmd)
		{
		case 'i':
		case 'I':
		{
			//calculate internal angles
			cout << "Please enter three sides of the angle: " << endl;
			cin >> a >> b >> c;

			legal = (a > 0) && (b > 0) && (c > 0)
				&& (a + b > c)
				&& (b + c > a) && (a + c > b);
			double A = iangle(a, b, c);
			cout << "A: " << A << " degree." << endl;
			B = iangle(a, b, c);
			cout << "B: " << B << " degree." << endl;
			C = iangle(a, b, c);
			cout << "C: " << C << " degree." << endl;
		}
		case 'a':
		case 'A':
		{

		}
		


		cout << "The area: " <<
			return 0;
	}

}