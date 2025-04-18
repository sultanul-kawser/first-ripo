#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;
    for (int i = 0; i < row; i++)
    {

        for (int j = row - i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}