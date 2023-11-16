#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int user;
	int computer;
	string result = "";
	srand(time(0));
	cout << "scissor(0), rock (1), paper(2): ";
	cin >> user;
	computer = rand() % 3;
	//cout << computer;
	string c;
	string u;
	if (user == 1)
	{
		if (computer == 0)
		{
			result = "Computer is scissor. You are rock. You won";
		}
		else if (computer == 1)
		{
			result = "Computer is rock. You are rock. You draw";
		}
		else if (computer == 2)
		{
			result = "Computer is paper. You are rock. You lost";
		}
	}
	else if (user == 0)
	{

		if (computer == 0)
		{
			result = "Computer is scissor. You are scissor. You draw";
		}
		else if (computer == 1)
		{
			result = "Computer is rock. You are scissor. You lost";
		}
		else if (computer == 2)
		{
			result = "Computer is rock. You are scissor. You won";
		}
	}
	else if (user == 2)
	{
		if (computer == 0)
		{
			result = "Computer is scissor. You are paper. You lost";
		}
		else if (computer == 1)
		{
			result = "Computer is rock. You are paper. You won";
		}
		else if (computer == 2)
		{
			result = "Computer is paper. You are paper. You draw";
		}
	}
	cout << result << endl; 
	return 0;
}