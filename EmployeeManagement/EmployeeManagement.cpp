#include <iostream>
#include "Users.h"
using namespace std;

int main()
{
    int ID;
    cout << "Please enter user ID: ";
    cin >> ID;
    Users guest;
    if (guest.isUser(ID) == true)
    {
        guest.createUser();
    }
    else
    {

    }
    
}
