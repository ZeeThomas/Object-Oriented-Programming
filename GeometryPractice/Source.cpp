
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;
#define PI 3.14159265358979323846264338327950288

/*double iangle(double f, double s1, double s2) {
	double ang;
	ang = acos((s1 * s1 + s2 * s2 - f * f) / (2 * s1 * s2));
	ang = ang * 180.0 / PI;

	return ang;
}*/

double area(double n, double s) {
	double A;
	A = (n * (s * s))/(4 * tan(PI/n));

	return A;
}

#define POLYGONS	5 // currently only 5 triangles at most can be recorded
double polygons[POLYGONS][7];

void printrecords(const double triangles[][7], const int records) {
	// print table header
	cout << left // left align
		<< setprecision(2)
		<< showpoint
		<< fixed;

	cout << setw(12) << "Triangle#"
		<< setw(10) << "a"
		<< setw(10) << "b"
		<< setw(10) << "c"
		<< setw(10) << "A" //"α" - internationalization is another big topic
		<< setw(10) << "B" //"β"
		<< setw(10) << "C" //"γ"
		<< setw(10) << "Area"
		<< endl;
	// print each record
	for (int i = 0; i < records; i++)
	{
		//cout << setw(12) << i+1 // "Triangle #"
		//	<< setw(10) << triangles[i][0] // "a"
		//	<< setw(10) << triangles[i][1] // "b"
		//	<< setw(10) << triangles[i][2] // "c"
		//	<< setw(10) << triangles[i][3] // "α"
		//	<< setw(10) << triangles[i][4] // "β"
		//	<< setw(10) << triangles[i][5] // "γ"
		//	<< setw(10) << triangles[i][6] // "Area"
		//	<< endl;

		cout << setw(12) << i + 1; // "Triangle #"
		for (int j = 0; j < 7; j++)
		{
			cout << setw(10) << triangles[i][j];
		}
		cout << endl;

	}
}

int main() {
	double n, s; // 3 sides
	double A; // 3 internal angles

	char cmd;
	bool legal = true;
	double tarea;

	int triangle = 0, current = 0; // triangle index
	int times = 0; // how many times played
	int records = 0; // current number of records <= TRIANGLES

	cout << "Geometry Guru!" << endl;
	cout << "==============" << endl;

	while (true)
	{
		cout << "Please enter a command:";
		cin >> cmd;
		cout << endl;

		switch (cmd)
		{
		case 'n':
		case 'N':
			do
			{

				// 7. Add user inputand output
				cout << "Please enter the number of sides and length :";

				cin >> n >> s;
				cout << endl;
				legal = (n > 0) && (s > 0);

			} while (!legal);
			// record the three sides of a triangle
			polygons[POLYGONS][0] = n;
			polygons[POLYGONS][1] = s;

			// a trick to hold the current triangle
			current = triangle;
			// move to the next record, if it's full, wrap back from the beginning
			triangle++;
			triangle %= POLYGONS;

			times++;
			records = (times < POLYGONS) ? times : POLYGONS;

			break;
		case 'a':
		case 'A':
			tarea = area(n, s);
			cout << "The area: " << tarea << endl;
			// record the result
			polygons[current][6] = tarea;
			break;

		case 'p':
		case 'P': // print out the records
			printrecords(polygons, records);
			break;
		case 'q':
		case 'Q':
			cout << "Are you sure you want to quit?(Y/N):";
			while (true)
			{
				cin >> cmd;
				cout << endl;
				if (cmd == 'Y' || cmd == 'y')
					return 1;
				else
					break;
			}

			break;
		default:
			break;
		}

	}

	return 0;
}