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
int playGame(std::string *wordlist)
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

	//Random number generator using the current time on our device.
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
	//Letter check algorithm.
	display = word;
	for (int i = 0; i < display.length(); i++)
	{
		display[i] = '*';
	}
	while (exposed < word.length())
	{
		cout << "Miss: " << misses << "; " << endl;
		cout << "Enter a letter in word ";
		cout << display << " : " << endl;
		char response;
		cin >> response;
		bool goodGuess = false;
		bool duplicate = false;
		for (int i = 0; i < word.length(); i++)
		{
			if (response == word[i])
			{
				if (display[i] == word[i])
				{
					cout << response << " is already in the word." << endl;
					duplicate = true;
					break;
				}
				else
				{
					cout << "Well done! " << response << " is in the word" << endl;
					display[i] = word[i];
					exposed++;
					goodGuess = true;
				}
			}
		}
		if (duplicate)
		{
			continue;
		}
		if (!goodGuess)
		{
			misses++;
			cout << response << " is not in the word" << endl;
			drawMan();
		}
		if (misses == 6)
		{
			cout << "You were killed! Try again." << endl;
			break;
			abort();
		}
	}
	//Game end messages.
	if (misses == 0)
	{
		cout << "CHEATER! Misses = 0";
	}
	if (misses == 1)
	{
		cout << "Expert! Misses = 1";
	}
	if (misses == 2)
	{
		cout << "Good job! Misses = 2";
	}
	if (misses == 3)
	{
		cout << "Decent! Misses = 3";
	}
	if (misses == 4)
	{
		cout << "Nearly killed! Misses = 4";
	}
	if (misses == 5)
	{
		cout << "OH MY GOD! Misses = 5";
	}
	return misses;
}
