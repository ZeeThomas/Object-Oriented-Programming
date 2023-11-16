

#include <iostream>
using namespace std;



int main()
{
//Task 
 //Create a program that has an array of 10 elements and asks the user for each number. Then calculates and prints out the average, sum, product
	/* int numbers[10];
	int total = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Give a number: " << endl;
		cin >> numbers[i];
		total += numbers[i];
	}	
	double average = double(total) / 10;
	cout << "Your average is " << average << endl;
	*/
	//TASK
	//create a program that will randomly select four cards from a deck of 52 cards. 
	/*string suits[] = {"Spades", "Clubs", "Diamonds", "Hearts"};
	string faces[] = { "Aces", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Ten", "Jacks", "Queens", "Kings" };
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		int s = rand() % 4;
		int f = rand() % 13;
		cout << "The card is " + faces[f] + " of " + suits[s] << endl;
	}
	*/
 //TASK
 //create a program that reverses the 
 //order of the array

	int reverse[] = {1,2,3,4,5};
	int temp[5];
	for (int i = 0; i < 5 ; i++)
	{
		temp[i] = reverse[ 5-1-i];
		cout << temp[i];
	}
	//char city[] = "Dallas";
		//cout << city << endl;
 //TASK
 //count the occurrences of each letter in an array of characters;

	//char letters = {'a', 'b', 'c', 'd'}

	int counter = 0; 

	for (int i = 0; i < 4; i++)
	{
		counter++;
	}
}

