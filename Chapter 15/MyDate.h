#pragma once
class MyDate
{
	protected:
		int year;
		int month;
		int day;
	public:
		MyDate();
		MyDate(int year, int month, int day);
		int getYear() const;
		int getMonth() const;
		int getDay() const;
		void setYear(int y);
		void setMonth(int m);
		void setDay(int d);
};

