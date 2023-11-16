#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.h"
class OvernightPackage :public Package
{
	protected:

	public: 
		double extrafeeperounce;
		OvernightPackage(const string& name, const string& address, const string& city, const string& state, int zip, double weight, double costperounce, double extrafeeperounce);
		double calculateCost();
		void setOvernightFeePerOunce(double fee);
		void printPackageInfo();

};

#endif