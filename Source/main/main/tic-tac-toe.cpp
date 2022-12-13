#include <iostream>
#include "tic-tac-toe.h"
using namespace std;

char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';

void draw()
{
	system("cls");
	cout << "Tic Tac Toe" << endl;
	cout << "Rules:" << endl;
	cout << "You must create a horizontal, vertical or a diagonal line with your symbol, which is X or O, and when you do, you beat your opponent" << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << " | " << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void input()
{
	int num;
	cout << "Please enter a number on the field: ";
	cin >> num;

	if (num == 1)
	{
		matrix[0][0] = player;
	}
	else if (num == 2)
	{
		matrix[0][1] = player;
	}
	else if (num == 3)
	{
		matrix[0][2] = player;
	}
	else if (num == 4)
	{
		matrix[1][0] = player;
	}
	else if (num == 5)
	{
		matrix[1][1] = player;
	}
	else if (num == 6)
	{
		matrix[1][2] = player;
	}
	else if (num == 7)
	{
		matrix[2][0] = player;
	}
	else if (num == 8)
	{
		matrix[2][1] = player;
	}
	else if (num == 9)
	{
		matrix[2][2] = player;
	}
	else
	{
		cout << "Please enter a valid number!";
	}
}

void togglePlayer()
{
	if (player == 'X')
	{
		player = 'O';
	}
	else
	{
		player = 'X';
	}
}

char win()
{
	//First player.
	if (matrix[0][0] == 'X' and matrix[0][1] == 'X' and matrix[0][2] == 'X')
	{
		return 'X';
	}
	if (matrix[1][0] == 'X' and matrix[1][1] == 'X' and matrix[1][2] == 'X')
	{
		return 'X';
	}
	if (matrix[2][0] == 'X' and matrix[2][1] == 'X' and matrix[2][2] == 'X')
	{
		return 'X';
	}
	if (matrix[0][0] == 'X' and matrix[1][0] == 'X' and matrix[2][0] == 'X')
	{
		return 'X';
	}
	if (matrix[0][1] == 'X' and matrix[1][1] == 'X' and matrix[2][1] == 'X')
	{
		return 'X';
	}
	if (matrix[0][2] == 'X' and matrix[1][2] == 'X' and matrix[2][2] == 'X')
	{
		return 'X';
	}
	if (matrix[0][0] == 'X' and matrix[1][1] == 'X' and matrix[2][2] == 'X')
	{
		return 'X';
	}
	if (matrix[2][0] == 'X' and matrix[1][1] == 'X' and matrix[0][2] == 'X')
	{
		return 'X';
	}

	//Second player.
	if (matrix[0][0] == 'O' and matrix[0][1] == 'O' and matrix[0][2] == 'O')
	{
		return 'O';
	}
	if (matrix[1][0] == 'O' and matrix[1][1] == 'O' and matrix[1][2] == 'O')
	{
		return '0';
	}
	if (matrix[2][0] == 'O' and matrix[2][1] == 'O' and matrix[2][2] == 'O')
	{
		return '0';
	}
	if (matrix[0][0] == 'O' and matrix[1][0] == 'O' and matrix[2][0] == 'O')
	{
		return 'O';
	}
	if (matrix[0][1] == 'O' and matrix[1][1] == 'O' and matrix[2][1] == 'O')
	{
		return 'O';
	}
	if (matrix[0][2] == 'O' and matrix[1][2] == 'O' and matrix[2][2] == 'O')
	{
		return 'O';
	}
	if (matrix[0][0] == 'O' and matrix[1][1] == 'O' and matrix[2][2] == 'O')
	{
		return 'O';
	}
	if (matrix[2][0] == 'O' and matrix[1][1] == 'O' and matrix[0][2] == 'O')
	{
		return 'O';
	}
	return '/';
}

void playTicTacToe()
{
	draw();
	while (true)
	{
		input();
		draw();
		if (win() == 'X')
		{
			cout << "Congratulations! X wins!" << endl;
			break;
		}
		else if (win() == 'O')
		{
			cout << "Congratulations! O wins!" << endl;
			break;
		}
		togglePlayer();
	}
	system("pause");
}
