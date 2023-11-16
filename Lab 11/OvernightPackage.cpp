#include "OvernightPackage.h"
OvernightPackage::OvernightPackage(const string& name, const string& address, const string& city, const string& state, int zip, double weight, double costperounce, double extrafeeperounce)
{
	this->name = name;
	this->address = address;
	this->city = city;
	this->state = state;
	this->zip = zip;
	this->weight = weight;
	this->costPerOunce = costperounce;
	this->extrafeeperounce = extrafeeperounce;
	ID++;
}
double OvernightPackage::calculateCost()
{
	return weight * (costPerOunce + extrafeeperounce);
}
void OvernightPackage::setOvernightFeePerOunce(double fee)
{
	extrafeeperounce = fee;
}
void OvernightPackage::printPackageInfo()
{
	cout << "-----------------------------------------" << endl;
	cout << "Overnight Package ID: " << ID << endl;
	cout << "\n";
	cout << name << "\n" << address << "\n" << city << "," << state << " " << zip << endl;
	cout << "\n" << "Cost: $" << calculateCost() << endl;
	cout << "-----------------------------------------" << endl;
}