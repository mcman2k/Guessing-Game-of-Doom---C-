//Guessing Game Version 2
//*Same content, just using a while loop with a retry option

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	int age;
	string name;
	
	cout << "Enter a name: ";
	cin >> name;
	
	cout << endl;
	
	cout << "And if I may add, your age: ";
	cin >> age;
	
	cout << "Hello," << name << " welcome to your DOOM!!! Hahahaaa" << endl << endl;
	cout << "I see that you're" << age << " years old" << endl;
	Sleep(500);
	cout << "Now that I know your age, GUESS MINE!!!" << endl;
	Sleep(500);
	
	//Logic begins here
	
	bool play_again = true;
	
	while(play_again == true); //loop will run on users decision to continue
	{
		//generate the random age to be guessed
		srand( (unsigned)time( 0 ) );
		int myage = (rand() % 100);
		
		bool correct_guess = false;
		int input_num; //is used to save user input
		int attempt_cnt = 1; //keeps track of user attempts
		
		while(correct_guess == false)
		{
			if(attempt_cnt == 1) //if it is the first attempt
			{
				cout << "Enter a number(1 - 100): ";
			}
			else
			{
				cout << "BOOM! (You're shot with a Desert Eagle!)" << endl;
				cout << "Try again: ";
			}
			cin >> input_num; //input number from the user
			
			if(input_num == myage)
			{
				cout << "*GASP* Your right! Ahhh, I AM DEFEATED!!!" << endl;
				cout << "YOU WIN!!";
				correct_guess = true; //sets the flag to true to terminate loop
			}
			else
			{
				attempt_cnt++; //increments attempts
				if(input_num < myage)
				{
					cout << "HAHA, too low!" << endl;
				}
				if(input_num > myage)
				{
					cout << "URRGG!! Too HIGH!" << endl;
				}
			}
		}

	//Asks user if he/she would like to continue the game
	string choice;
	cout << "Select Y to play again or any other key to quit: ";
	cin >> choice;
	
	if(choice != "Y" || choice != "y")
	{
		play_again = false;
	}
  }
return 0;
}
	
