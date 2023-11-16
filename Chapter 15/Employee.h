#pragma once
#include "Person.h"
#include "MyDate.h"
class Employee : public Person
{
	protected:
		bool office;
		int salary;
		MyDate dateHired;
	public:
		Employee();
		Employee(string name, string address, string phoneNumber, string email, bool office, int salary, int year, int month, int day);
		bool isOffice()const;
		int getSalary() const;
		void getDateHired() const;;
		void setOffice(bool o);
		void setSalary(int s);
		void setDateHired(int year, int month, int day);
		void toString()const;
};

