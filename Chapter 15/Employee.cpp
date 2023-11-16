#include "Employee.h"
#include "MyDate.h"
Employee::Employee()
{

}
Employee::Employee(string name, string address, string phoneNumber, string email, bool office, int salary, int year, int month, int day)
{
	setName(name);
	setAddress(address);
	setPhoneNumber(phoneNumber);
	setEmail(email);
	MyDate p = MyDate(year, month, day);
	dateHired = p;
}
bool Employee::isOffice()const
{
	return office;
}
int Employee::getSalary() const
{
	return salary;
}
void Employee::getDateHired() const
{
	cout << "Date Hired: " << dateHired.getMonth() << "-" << dateHired.getDay() << "-" << dateHired.getYear() << endl;

}
void Employee::setOffice(bool o)
{
	office = o;
}
void Employee::setSalary(int s)
{
	salary = s;
}
void Employee::setDateHired(int year, int month, int day)
{
	dateHired.setYear(year);
	dateHired.setMonth(month);
	dateHired.setDay(day);
}
void Employee::toString() const
{
	string s = "Student" + name;
	cout << s << endl;
}