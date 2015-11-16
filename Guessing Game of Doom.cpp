#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;

int main()
{
	int age; //assigns the age variable as an int for number value
	int guess; //assigns the guess variable as an int for number value
	string name;  //assigns the name variable as a string for the characters
	
	
	//initial prompt
	cout << "****************************************" << endl;
	cout << "*      An INTERACTIVE EXPERIMENT...    *" << endl;
	cout << "****************************************" << endl << endl; 
	
	Sleep(500);
	cout << endl << "Please enter your name and age..." << endl; //user prompt for entering information
	
	cout << "Name: "; //prompt for the name of the user
	cin >> name; //enter the name
	
	cout << endl << "Age: "; //prompt for the age of the user
	cin >> age; //enter the age
	
	cout << endl << "Hello " << name << ", welcome to your DOOM!!" << endl; //response to user entry
	Sleep(1000);
	cout << "Ahh, and it appears you are " << age << " years old!!" << endl; //response to the user entry for age
	
	Sleep(1500);
	cout << endl << endl << "Now that I know your age, I BET YOU CAN'T GUESS MINE, hahahaha!!!" << endl << endl; //evil prompt (lol)
	Sleep(2000);
	cout << "-----------------------------------------------------------------" << endl; //line breaker
	
	//****LOGIC AND FUNCTIONALITY BEGINS HERE***
	
	//generate the random age to be guessed
	srand( (unsigned)time( 0 ) );
	int myage = (rand() % 10); 
	
	for(int lives = 0; lives < 5||myage == guess; lives++)
	{
		cout << endl << "Have a GUESS, hehehe..., from 1 - 10: ";
		cin >> guess;
		
		if(guess == myage)
		{
			Sleep(3000);
			cout << "*GASP* Your right! Ahhh, I AM DEFEATED!!!" << endl;
			Sleep(1000);
			cout << endl << "YOU WIN!!" << endl;
			break; //ends the tasks
		}
		else if(guess != myage)
		{
			cout << "WRONG!! HAHAHAHA!! DIEEEEE!!! *Shotgun fires at your face*" << endl << endl;
		}
		
		if(lives == 0)
			{
		     Beep(440, 500);
		     Sleep(500);
			 cout << "*******************" << endl;
			 cout << "*4 LIVES REMAINING*" << endl;
			 cout << "*******************" << endl;
			}
			
			
		if(lives == 1)
            {
            Beep(440, 500);
            Sleep(500);
			cout << "*******************" << endl;		
			cout << "*3 LIVES REMAINING*" << endl;
			cout << "*******************" << endl;
            }
			
			
		if(lives == 2)
			{
			Beep(440, 500);
			Sleep(500);
			cout << "*******************" << endl;
			cout << "*2 LIVES REMAINING*" << endl;
			cout << "*******************" << endl;
			}
			
			
		if(lives == 3)
			{
			Beep(440, 500);
			Sleep(500);
			cout << "*******************" << endl;
			cout << "*1 LIFE REMAINING*" << endl;
			cout << "*******************" << endl;
			}
			
		if(lives == 4)
		{
			Beep(440, 500);
			Sleep(500);
			cout << "*Your body can't take anymore shots, and your face falls off...*" << endl << endl;
			cout << "GAME OVER" << endl;
			break;
		}
	}
	
	

return 0;
}
