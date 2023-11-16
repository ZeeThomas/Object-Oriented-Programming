// examPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{   
    Circle circle1;
    Circle circle2;
    int list[6] = { 11,12,13, 14,15,16 };
    int* p = list;
    cout << "Hello World!\n";
    cout << (list + 2) << endl;
    cout << *(list + 2) << endl;
    cout << list[2] << endl;
    cout << *(p + 2) << endl;
    cout << p[2] << endl;


}
