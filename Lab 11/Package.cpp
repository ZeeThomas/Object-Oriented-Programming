#include "Package.h"
int Package::ID = 0;
Package::Package()
{

}
Package::Package(const string& name, const string& address, const string& city, const string& state, int zip, double weight, double costperounce)
{
	this->name = name;
	this->address = address;
	this->city = city;
	this->state = state;
	this->zip = zip;
	this->weight = weight;
	this->costPerOunce = costperounce;
	ID++;
}
void Package::setWeight(double w)
{
	if (w < 0)
	{
		cout << "Warning: no non-positive values allowed";
	}
	else
	{
		weight = w;
	}
	
}
void Package::setCostPerOunce(double c)
{
	if (c< 0)
	{
		cout << "Warning: no non-positive values allowed";
	}
	else
	{
		costPerOunce = c;
	}
	
}
double Package::calculateCost()
{
	return costPerOunce * weight;
}
void Package::printPackageInfo()
{
	cout << "-----------------------------------------" << endl;
	cout << "Package ID: " << ID << endl;
	cout << "\n";
	cout << name << "\n" << address << "\n" << city << "," << state << " " << zip << endl;
	cout << "\n" << "Cost: $" << calculateCost() << endl;
	cout << "-----------------------------------------" << endl;
}
