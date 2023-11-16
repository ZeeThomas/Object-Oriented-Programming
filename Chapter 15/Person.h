#include <iostream>
using namespace std;
class Person
{
	protected:
		string name;
		string address;
		string phoneNumber;
		string email;
	public:
		Person();
		Person(string name, string address, string phoneNumber, string email);
		string getName() const;
		string getAddress() const;
		string getPhoneNumber() const;
		string getEmail() const;
		void setName(string n);
		void setAddress(string a);
		void setPhoneNumber(string p);
		void setEmail(string e);
		virtual void toString() const;


};

