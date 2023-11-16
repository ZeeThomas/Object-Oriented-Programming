#include <iostream>
using namespace std;
template <typename T>

bool isGreater(const T list1[], const T list2[], int size1, int size2)
{

	for (int i = 0; i < size1; i++)
	{
		for (int b = 0; b < size2; b++)
		{
			if (list1[i] < list2[b])
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	int a[4] = { 9, 10,11,23 };
	int b[4] = { 5, 3, 2, 7 };
	int c[4] = { 9, 10,11,1 };
	cout << "{ 9, 10,11,23 } >  { 5, 3, 2, 7 }? " << isGreater(a, b, 4, 4) << endl;
	cout << "{ 9, 10,11,1 } > { 5, 3, 2, 7 }? " << isGreater(c, b, 4, 4) << endl;
	string d[4] = { "Miami", "Lakeland", "Tampa", "Orlando" };
	string e[4] = { "Dallas", "Austin","Antonia", "Laurel" };
	cout << "{ 'Miami', 'Lakeland', 'Tampa', 'Orlando'} > { Dallas, Austin,Antonia, Laurel }? "<<isGreater(d, e, 4, 4)<<endl;
}