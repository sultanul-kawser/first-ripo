#include <iostream>
#include <ctime>
using namespace std;

void drawboard(char *spaces);
void playermove1(char *spaces, char player1);
void playermove2(char *spaces, char player2);
bool checkwinner(char *spaces, char player1, char player2);
bool checktie(char *spaces);

int main()
{
    char spaces[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' '};
    char player1;
    char player2;
    bool running = true;

    cout << "Choose a marker between X or O :";
    cin >> player1;

    if (player1 == 'X' || player1 == 'x')
    {
        player2 = 'O';
    }
    else
    {
        player2 = 'X';
    }

    drawboard(spaces);
    while (running)
    {
        playermove1(spaces, player1);
        drawboard(spaces);
        if (checkwinner(spaces, player1, player2))
        {
            running = false;
            break;
        }
        else if (checktie(spaces))
        {
            running = false;
            break;
        }
        playermove2(spaces, player2);
        drawboard(spaces);
        if (checkwinner(spaces, player1, player2))
        {
            running = false;
            break;
        }
        else if (checktie(spaces))
        {
            running = false;
            break;
        }
    }
    cout << "Thanks for playing!";
}

void drawboard(char *spaces)
{
    cout << endl;
    cout << "  1  |  2  |  3  " << endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "  4  |  5  |  6  " << endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "  7  |  8  |  9  " << endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl;
    cout << "     |     |     " << endl;
    cout << endl;
}
void playermove1(char *spaces, char player1)
{
    int num;
    do
    {
        cout << "Turn of player 1 to put a marker (1-9):";
        cin >> num;
        num--;
        if (spaces[num] == ' ')
        {
            spaces[num] = player1;
        }
    } while (num < 0 || num > 9);
}
void playermove2(char *spaces, char player2)
{
     int num;
    do
    {
        cout << "Turn of player 2 to put a marker (1-9):";
        cin >> num;
        num--;
        if (spaces[num] == ' ')
        {
            spaces[num] = player2;
        }
    } while (num < 0 || num > 9);
}
bool checkwinner(char *spaces, char player1, char player2)
{
    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        spaces[0] == player1 ? cout << "**PLAYER 1 IS THE WINNER!**\n" : cout << "**PLAYER 2 IS THE WINNER!**\n";
    }
    else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        spaces[3] == player1 ? cout << "**PLAYER 1 IS THE WINNER!**\n" : cout << "**PLAYER 2 IS THE WINNER!**\n";
    }
    else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        spaces[6] == player1 ? cout << "**PLAYER 1 IS THE WINNER!**\n" : cout << "**PLAYER 2 IS THE WINNER!**\n";
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        spaces[0] == player1 ? cout << "**PLAYER 1 IS THE WINNER!**\n" : cout << "**PLAYER 2 IS THE WINNER!**\n";
    }
    else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        spaces[1] == player1 ? cout << "**PLAYER 1 IS THE WINNER!**\n" : cout << "**PLAYER 2 IS THE WINNER!**\n";
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        spaces[2] == player1 ? cout << "**PLAYER 1 IS THE WINNER!**\n" : cout << "**PLAYER 2 IS THE WINNER!**\n";
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        spaces[0] == player1 ? cout << "**PLAYER 1 IS THE WINNER!**\n" : cout << "**PLAYER 2 IS THE WINNER!**\n";
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        spaces[2] == player1 ? cout << "**PLAYER 1 IS THE WINNER!**\n" : cout << "**PLAYER 2 IS THE WINNER!**\n";
    }
    else
    {
        return false;
    }
    return true;
}
bool checktie(char *spaces)
{
    for (int i = 0; i < sizeof(spaces) / sizeof(spaces[0]); i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
            break;
        }
    }
    return true;
}
