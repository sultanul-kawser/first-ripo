#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    long long int primarySum = 0, secondarySum = 0;
    for (int i = 0; i < n; i++)
    {
        primarySum += mat[i][i];

        secondarySum += mat[i][n - i - 1];
    }
    long long int difference = primarySum - secondarySum;
    if (difference < 0)
    {
        cout << (-1) * difference;
    }
    else
    {
        cout << difference;
    }
}