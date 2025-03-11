#include <iostream>
using namespace std;
int main()
{
    int ships[5][5] = {
        {0, 1, 0, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 1, 0},
        {1, 0, 1, 0, 0},
        {0, 0, 1, 0, 1},
    };

    int hits = 0, turns = 0;

    while (hits < 10)
    {
        int row, column;

        cout << "select row between 0 and 4:" << endl;
        cin >> row;
        cout << "select column between 0 and 4:" << endl;
        cin >> column;

        if (ships[row][column] == 1)
        {
            ships[row][column] = 0;
            hits++;
            cout << "Win! " << (10 - hits) << " hits remaining." << endl;
        }
        else
        {
            cout << "Missed!";
        }

        turns++;
    }

    cout << "you took " << turns << " turns to win.";

    return 0;
}