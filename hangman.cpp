//Libraries that the game requires. 
#include <iostream>
#include <string>

using namespace std;

//Global variable, in order to be used in multiple functions.
int misses = 0;

//Style of the hangman.
void drawMan()
{
	if (misses == 1)
	{
		cout << endl;
		cout << "Oh no! One leg is out!" << endl;
		cout << "---------------" << endl;
		cout << "|             |" << endl;
		cout << "|             O" << endl;
		cout << "|            /|\\" << endl;
		cout << "|            / " << endl;
		cout << "|         '''''''''" << endl;
		cout << endl;
	}
	else if (misses == 2)
	{
		cout << endl;
		cout << "NOOOO! BOTH LEGS!" << endl;
		cout << "---------------" << endl;
		cout << "|             |" << endl;
		cout << "|             O" << endl;
		cout << "|            /|\\" << endl;
		cout << "|            " << endl;
		cout << "|         '''''''''" << endl;
		cout << endl;
	}
	else if (misses == 3)
	{
		cout << endl;
		cout << "C'MON NOT MY ARM!" << endl;
		cout << "---------------" << endl;
		cout << "|             |" << endl;
		cout << "|             O" << endl;
		cout << "|            /|" << endl;
		cout << "|            " << endl;
		cout << "|         '''''''''" << endl;
		cout << endl;
	}
	else if (misses == 4)
	{
		cout << endl;
		cout << "OK STOP!" << endl;
		cout << "---------------" << endl;
		cout << "|             |" << endl;
		cout << "|             O" << endl;
		cout << "|             |" << endl;
		cout << "|            " << endl;
		cout << "|         '''''''''" << endl;
		cout << endl;
	}
	else if (misses == 5)
	{
		cout << endl;
		cout << "LAST CHANCE!" << endl;
		cout << "---------------" << endl;
		cout << "|             |" << endl;
		cout << "|             O" << endl;
		cout << "|             " << endl;
		cout << "|             " << endl;
		cout << "|         '''''''''" << endl;
		cout << endl;
	}
	else if (misses == 6)
	{
		cout << endl;
		cout << "Killed." << endl;
		cout << "---------------" << endl;
		cout << "|             |" << endl;
		cout << "|             " << endl;
		cout << "|            " << endl;
		cout << "|            " << endl;
		cout << "|         '''''''''" << endl;
		cout << endl;
	}
}


int main()
{
	drawMan();
}
