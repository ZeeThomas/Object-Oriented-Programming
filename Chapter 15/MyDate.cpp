#include "MyDate.h"
MyDate::MyDate()
{

}
MyDate::MyDate(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}
int MyDate::getYear() const
{
	return year;
}
int MyDate::getMonth() const
{
	return month;
}
int MyDate::getDay() const
{
	return day;
}
void MyDate::setYear(int y)
{
	year = y;
}
void MyDate::setMonth(int m)
{
	month = m;
}
void MyDate::setDay(int d)
{
	day = d;
}
