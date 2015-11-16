#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	int age; //assigns the age variable as an int for number value
	int guess; //assigns the guess variable as an int for number value
	string name;  //assigns the name variable as a string for the characters
	
	cout << "Welcome to my INTERACTIVE tournament!!!" << endl; //initial prompt
	
	cout << endl << "Please enter your name and age..." << endl; //user prompt for entering information
	
	cout << "Name: "; //prompt for the name of the user
	cin >> name; //enter the name
	
	cout << endl << "Age: "; //prompt for the age of the user
	cin >> age; //enter the age
	
	cout << endl << "Hello " << name << " welcome to your DOOM!!" << endl; //response to user entry
	cout << "Ahh, and it appears you are " << age << " years old!!" << endl; //response to the user entry for age
	
	cout << endl << endl << "Now that I know your age, I BET YOU CAN'T GUESS MINE, hahahaha!!!" << endl << endl; //evil prompt (lol)
	cout << "-----------------------------------------------------------------" << endl; //line breaker
	
	
	//generate the random age to be guessed
	srand( (unsigned)time( 0 ) );
	int myage = (rand() % 127 + 1); 
	
	for(int lives = 0; lives < 5||myage == guess; lives++)
	{
		cout << "Have a GUESS, hehehe..., from 1 - 127: ";
		cin >> guess;
		
		if(guess == myage)
		{
			cout << "*GASP* Your right! Ahhh, I AM DEFEATED!!!" << endl;
			cout << endl << "YOU WIN!!" << endl;
		}
		else if(guess != myage)
		{
			cout << "WRONG!! HAHAHAHA!! DIEEEEE!!! *Shotgun fires at your face*" << endl << endl;
		}
		if(lives == 5)
		{
			break;
		}
	}
	
	cout << "*Your body can't take anymore shots, and you die..." << endl << endl;
	cout << "GAME OVER" << endl;

return 0;
}
