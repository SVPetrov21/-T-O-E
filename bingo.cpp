#include <iostream>
using namespace std;

void display(int matrix[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "\t" << matrix[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int count = 0, random = 1, counter = 0;
    int matrix[5][5];
    srand((unsigned)time(NULL));
    cout << "BINGO" << endl;
    cout << "Rules: Enter your bingo card consisting of 5 rows and 5 columns. Whenever you get 5 horizontal, vertical or diagonal guessed numbers you win and get Bingo!" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    while (count != 5)
    {
        for (int i = 1; i <= 1; i++)
        {
            random = rand() % 100;
        }
        cout << random;
        counter++;
        if (counter == 140)
        {
            cout << "Unlucky! Try again.";
            break;
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (matrix[i][j] == random)
                {
                    matrix[i][j] = 0;
                    cout << endl;
                    cout << "Yes, you got a number!" << endl;
                }
            }
        }
        display(matrix);
        cout << endl;
        if (matrix[0][0] == 0 && matrix[0][1] == 0 && matrix[0][2] == 0 && matrix[0][3] == 0 && matrix[0][4] == 0)
        {
            cout << "BINGO! Congratulations, you win!";
            break;
        }
        else if (matrix[1][0] == 0 && matrix[1][1] == 0 && matrix[1][2] == 0 && matrix[1][3] == 0 && matrix[1][4] == 0)
        {
            cout << "BINGO! Congratulations, you win!";
            break;
        }
        else if (matrix[2][0] == 0 && matrix[2][1] == 0 && matrix[2][2] == 0 && matrix[2][3] == 0 && matrix[2][4] == 0)
        {
            cout << "BINGO! Congratulations, you win!";
            break;
        }
        else if (matrix[3][0] == 0 && matrix[3][1] == 0 && matrix[3][2] == 0 && matrix[3][3] == 0 && matrix[3][4] == 0)
        {
            cout << "BINGO! Congratulations, you win!";
            break;
        }
        else if (matrix[4][0] == 0 && matrix[4][1] == 0 && matrix[4][2] == 0 && matrix[4][3] == 0 && matrix[4][4] == 0)
        {
            cout << "BINGO! Congratulations, you win!";
            break;
        }
        else if (matrix[0][0] == 0 && matrix[1][0] == 0 && matrix[2][0] == 0 && matrix[3][0] == 0 && matrix[4][0] == 0)
        {
            cout << "BINGO! Congratulations, you win!";
            break;
        }
        else if (matrix[0][0] == 0 && matrix[1][0] == 0 && matrix[2][0] == 0 && matrix[3][0] == 0 && matrix[4][0] == 0)
        {
            cout << "BINGO! Congratulations, you win!";
            break;
        }
        else if (matrix[0][1] == 0 && matrix[1][1] == 0 && matrix[2][1] == 0 && matrix[3][1] == 0 && matrix[4][1] == 0)
        {
            cout << "BINGO! Congratulations, you win!";
            break;
        }
        else if (matrix[0][2] == 0 && matrix[1][2] == 0 && matrix[2][2] == 0 && matrix[3][2] == 0 && matrix[4][2] == 0)
        {
            cout << "BINGO! Congratulations, you win!";
            break;
        }
        else if (matrix[0][3] == 0 && matrix[1][3] == 0 && matrix[2][3] == 0 && matrix[3][3] == 0 && matrix[4][3] == 0)
        {
            cout << "BINGO! Congratulations, you win!";
            break;
        }
        else if (matrix[0][4] == 0 && matrix[1][4] == 0 && matrix[2][4] == 0 && matrix[3][4] == 0 && matrix[4][4] == 0)
        {
            cout << "BINGO! Congratulations, you win!";
            break;
        }
        else if (matrix[0][0] == 0 && matrix[1][1] == 0 && matrix[2][2] == 0 && matrix[3][3] == 0 && matrix[4][4] == 0)
        {
            cout << "BINGO! Congratulations, you win!";
            break;
        }
        else if (matrix[4][0] == 0 && matrix[3][1] == 0 && matrix[2][2] == 0 && matrix[1][3] == 0 && matrix[0][4] == 0)
        {
            cout << "BINGO! Congratulations, you win!";
            break;
        }
    }
}