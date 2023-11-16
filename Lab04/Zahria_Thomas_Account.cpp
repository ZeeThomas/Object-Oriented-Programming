#include <iostream>
using namespace std;
class Account
{
public:
	int id;
	double balance;
	double annualInterestRate;

	Account()
	{
		id = 0;
		balance = 0;
		annualInterestRate = 0;
	}
	Account(int i, double b, double a)
	{
		id = i;
		balance = b;
		annualInterestRate = a;
	}
	double getMontlyInterestRate()
	{
		return annualInterestRate / 12;
	}
	void withdraw(double amount)
	{
		balance -= amount;
	}
	void deposit(double amount)
	{
		balance += amount;
	}
};

int main()
{
	Account checking(1322, 21000, 4.12);
	checking.withdraw(2500);
	checking.deposit(3000);
	cout << "The balance for the account is " << checking.balance << endl;
	cout << "The montly interest rate is " << checking.getMontlyInterestRate() << endl;
	return 0;
}