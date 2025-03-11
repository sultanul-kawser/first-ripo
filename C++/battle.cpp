#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ships[3][4] = {
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 0, 1}};

    int hits = 0;
    int turns = 0;

    while (hits < 5)
    {
        int row, column;
        cout << "Enter a row number to hit a ship from 0 to 3: " << endl;
        cin >> row;
        cout << "Enter a column number to hit a ship from 0 to 3: " << endl;
        cin >> column;

        if (ships[row][column] == 1)
        {
            hits++;
            ships[row][column]=0;
            cout << "win! " << (5 - hits) << " hits remaining.\n";
        }
        else
        {
            cout << "Miss or already hit. Try again.\n";
        }

        turns++;
    }

    cout << "You took " << turns << " turns to win.";
    return 0;
}