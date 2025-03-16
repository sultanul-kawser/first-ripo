#include <iostream>
using namespace std;
int main()
{
    long long int t, n, store[20], result[20], fact = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        store[i] = {n};
        for (int j = 2; j <= store[i]; j++)
        {
            fact = fact * j;
        }

        result[i] = {fact};
        fact = 1;
    }
    for (int k = 0; k < t; k++)
    {
        cout << result[k] << endl;
    }
}