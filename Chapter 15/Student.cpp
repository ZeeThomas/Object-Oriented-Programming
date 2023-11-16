#include "Student.h"

Student::Student()
{
	cout << "Student created" << endl;
}
Student::Student(string name, string address, string phoneNumber, string email, int classStatus)
{
	setName(name);
	setAddress(address);
	setPhoneNumber(phoneNumber);
	setEmail(email);
	if (checkClass(classStatus))
	{
		setClassStatus(classStatus);
	}
}
bool Student::checkClass(int c)
{
	if (c >= 9 && c <= 12)
	{
		return true;
	}
	else
	{
		cout << "ERROR: Unaccepted Class Status" << endl;
		return false;
	}
}
string Student::getClassStatus() const
{
	return classStatus;
}
void Student::setClassStatus(int c)
{
	if (c == 9)
	{
		classStatus = "Freshman";
	}
	else if (c == 10)
	{
		classStatus = "Sophmore";
	}
	else if (c == 11)
	{
		classStatus = "Junior";
	}
	else if (c == 12)
	{
		classStatus = "Senior";
	}
}