#pragma once
#include "Person.h"
class Student : public Person
{
	protected:
		string classStatus;
	public:
		Student();
		Student(string name, string address, string phoneNumber, string email, int classStatus);
		bool checkClass(int c);
		string getClassStatus() const;
		void setClassStatus(int c);
		void toString() const;
};

