#include <iostream>
#include <cstdlib>
#include <String>
using namespace std;



//list of dice numbers
int tray[5];
//game over boolean
bool isGameOver = false;

void rollDice()
{
	srand(time(0));
	for (int i = 0; i < 6; i++)
	{
		int x = rand() % 6;
		tray[i] = x;
		//cout << tray[i] << endl;
	}
	
}
int askUser()
{
	int answer;
	cout << "Hello your tray is: " << tray[0] <<" "<<tray[1]<<" " << tray[2] << " " << tray[3] << " " << tray[4] << " " << endl;

	cout << "1. roll again\n2.make a category" << endl;
	cin >> answer;

	switch (answer)
		case 1: 


			case 2;
	return answer;
}
void main()
{	//answer for switch statement
	int answer;
	//roll dice
	rollDice();

	//ask user if they want to roll again or make category
	askUser();
}