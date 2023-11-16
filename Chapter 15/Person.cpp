#include "Person.h"
Person::Person()
{
	cout << "Person created!" << endl;
}
Person::Person(string name, string address, string phoneNumber, string email)
{
	this->name = name;
	this->address = address;
	this->phoneNumber = phoneNumber;
	this->email = email;
	cout << this->name << " is created" << endl;
}
string Person::getName() const
{
	return name;
}
string Person::getAddress() const
{
	return address;
}
string Person::getPhoneNumber() const
{
	return phoneNumber;
}
string Person::getEmail() const
{
	return email;
}
void Person::setName(string n)
{
	name = n;
}
void Person::setAddress(string a)
{
	address = a;
}
void Person::setEmail(string e)
{
	email = e;
}