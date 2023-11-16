#include "Users.h"
#include <iostream>
using namespace std;
Users::Users()
{

}
Users::Users(string fname, string lname, int ID, string password)
{
	this->fname = fname;
	this->lname = lname;
	this->ID = ID;
	this->password = password;
	userList.push_back(ID);
	numOfUsers++;
}
string Users::getName() const
{
	string s = fname + lname;
	return s;
}
int Users::getID() const
{
	return ID;
}
int Users::getNumUsers() const
{
	return numOfUsers;
}
string Users::getPassword() const
{
	return password;
}
void Users::setPassword(string newPassword)
{
	password = newPassword;
}
bool Users:: isUser(int ID)
{
	for (int i = 0; i < numOfUsers; i++)
	{
		if (userList[i] == ID)
		{
			return true;
		}
	}
	return false;
}
