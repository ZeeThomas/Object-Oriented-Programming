#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"
class TwoDayPackage : public Package
{
	protected:
		double flatfee;

	public:
		TwoDayPackage(const string& name, const string& address, const string& city, const string& state, int zip, double weight, double costperounce, double flatfee);
		void setFlatFee(double f);
		double calculateCost();
		void printPackageInfo();
};

#endif