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
//Main activities of the game.
int playGame(string wordlist[])
{
	int exposed = 0;
	int random = 0;
	string word;
	string display = word;

	cout << "HANGMAN - A game made by ᒍᑌᔕT ᑕOᗪE" << endl;
	cout << "Hello there! Welcome to hangman! You have to guess the word, you have 6 lives, and if you make a mistake 6 times you get killed. Small letters only! Good luck!" << endl;
	cout << endl;
	cout << "This is you. SAVE YOURSELF!" << endl;
	cout << "---------------" << endl;
	cout << "|             |" << endl;
	cout << "|             O" << endl;
	cout << "|            /|\\" << endl;
	cout << "|            / \\" << endl;
	cout << "|         '''''''''" << endl;
	cout << endl;

	//Random number generator.
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 1; i++)
	{
		random = (rand() % 10);
	}
	if (random == 1)
	{
		word = wordlist[1];
	}
	else if (random == 2)
	{
		word = wordlist[2];
	}
	else if (random == 3)
	{
		word = wordlist[3];
	}
	else if (random == 4)
	{
		word = wordlist[4];
	}
	else if (random == 5)
	{
		word = wordlist[5];
	}
	else if (random == 6)
	{
		word = wordlist[6];
	}
	else if (random == 7)
	{
		word = wordlist[7];
	}
	else if (random == 8)
	{
		word = wordlist[8];
	}
	else if (random == 9)
	{
		word = wordlist[9];
	}
	display = word;
}

int main()
{
	string wordlist[10] = { "programming", "hangman", "spaghetti", "responsibility", "address", "operator", "ideality", "compiler", "island", "yourself" };
	playGame(wordlist);
	return 0;
}
