#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream>
using namespace std;
class Package
{
	protected:
		string name;
		string address;
		string city;
		string state;
		int zip;
		double weight;
		double costPerOunce;
		int static ID;
	public: 
		Package();
		Package(const string& name, const string& address, const string& city, const string& state, int zip, double weight, double costperounce);
		void setWeight(double w);
		void setCostPerOunce(double c);
		double calculateCost();
		void printPackageInfo();



};

#endif