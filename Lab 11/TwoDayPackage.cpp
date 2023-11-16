#include "TwoDayPackage.h"
#include <iostream>
using namespace std;
TwoDayPackage::TwoDayPackage(const string& name, const string& address, const string& city, const string& state, int zip, double weight, double costperounce, double flatfee)
{
	
	this -> name = name;
	this->address = address;
	this->city = city;
	this->state = state;
	this->zip = zip;
	this->weight = weight;
	this->costPerOunce = costperounce;
	this->flatfee = flatfee;
	ID++;
}
void TwoDayPackage::setFlatFee(double f)
{
	if (f < 0)
	{
		cout << "Warning: no non-positive values allowed";
	}
	else
	{
		flatfee = f;
	}
}
double TwoDayPackage::calculateCost()
{
	return (weight * costPerOunce) + flatfee;
}
void TwoDayPackage::printPackageInfo()
{
	cout << "-----------------------------------------" << endl;
	cout << "Two Day Package ID: " << ID << endl;
	cout << "\n";
	cout << name << "\n" << address << "\n" << city << "," << state << " " << zip << endl;
	cout << "\n" << "Cost: $" << calculateCost() << endl;
	cout << "-----------------------------------------" << endl;
}