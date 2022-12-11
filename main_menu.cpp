#define _CRT_SECURE_NO_WARNINGS

//Libraries which the code requires
#include <iostream>
#include <cwchar>
#include <windows.h>
#include <iomanip>

using namespace std;

int main()
{
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;  // width of the signs
    cfi.dwFontSize.Y = 19; // height
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_NORMAL;
    wcscpy(cfi.FaceName, L"Arial Black"); // write the name of the font
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

    int TypeGame;

    system("Color 0E");
    cout << endl;
    cout << setw(50) << "MathWord";
    cout << endl;
    cout << endl;
    cout << "This game was made by JUST CODE" << setw(49) << "__" << endl;
    cout << "                               " << setw(50) << "|_|" << endl;
    cout << setw(31) << "|======================|" << setw(37) << " | |" << setw(10) << "| |" << endl;
    cout << setw(31) << "|======================|" << setw(37) << " | |" << setw(10) << "| |" << endl;
    cout << setw(30) << "| Choose what game   |" << setw(38) << " | |" << setw(10) << "| |" << endl;
    cout << setw(30) << "| you want to play!  |" << setw(38) << " | |" << setw(10) << "| |" << endl;
    cout << setw(30) << "|                    |" << setw(38) << " | |" << setw(10) << "| |" << endl;
    cout << setw(30) << "| Hangman:           |" << setw(38) << " | |" << setw(10) << "| |" << endl;
    cout << setw(30) << "| Enter 1            |" << setw(38) << " " << setw(9) << "" << endl;
    cout << setw(30) << "|                    |" << setw(36) << " |" << setw(10) << "|" << endl;
    cout << setw(30) << "| Bingo:             |" << endl;
    cout << setw(30) << "| Enter 2            |" << endl;
    cout << setw(30) << "|                    |" << setw(41) << "|" << endl;
    cout << setw(30) << "| Tic-tac-toe:       |" << setw(40) << " |" << setw(2) << "|" << endl;
    cout << setw(30) << "| Enter 3            |" << setw(45) << " |--| |--|" << endl;
    cout << setw(31) << "|======================|" << setw(44) << "|--   --|" << endl;
    cout << setw(31) << "|======================|" << setw(39) << " |" << setw(2) << "|" << endl;
    cout << setw(70) << " |" << setw(2) << "|" << endl;
    cout << setw(70) << " |" << setw(2) << "|" << endl;
    cout << setw(70) << " |" << setw(2) << "|" << endl;
    cout << setw(70) << " |" << setw(2) << "|" << endl;
    cout << setw(70) << " |" << setw(2) << "|" << endl;
    cout << setw(70) << " |" << setw(2) << "|" << endl;
    cout << setw(71) << "|" << endl;
    bool num = 0;
    do
    {
        cout << "Enter number of the game that you want play: ";
        cin >> TypeGame;
        if (TypeGame == 1)
        {
            "Hangman";
            num = 1;
        }
        else if (TypeGame == 2)
        {
            "Bingo";
            num = 1;
        }
        else if (TypeGame == 3)
        {
            "Tic-tac-toe";
            num = 1;
        }
        else
        {
            cout << "Please enter only numbers that are showing above! Try again!" << endl;
        }
    } while (num != 1);
}
