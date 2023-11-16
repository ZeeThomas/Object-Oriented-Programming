#pragma once
class MyInteger
{
private:
	int value;
	static double averageOfIntegers;
	static int sumOfIntegers;
	static int numberOfObjects;

public: 
	MyInteger(int v);
	int getValue() const;
	bool isEven() const;
	static bool isOdd(int t);
	bool equals(int t) const;
	bool equals(const MyInteger &m) const;
	static double getAverageOfIntegers();

};

