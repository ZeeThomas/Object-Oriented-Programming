#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Users
{
	private:
		string fname;
		string lname;
		int ID;
		int numOfUsers;
		string password;
		vector <int> userList;
	public:
		Users();
		Users(string fname, string lname, int ID, string password);
		string getName() const;
		int getID() const;
		int getNumUsers() const;
		string getPassword() const;
		void setPassword(string newPassword);
		bool isUser(int ID);
		void createUser();
		void operator=(const Users& u);
		

};
//bool isUser(int ID);

