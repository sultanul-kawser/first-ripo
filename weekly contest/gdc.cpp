#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, big, small, storeA[1000];
    cin >> a >> b;
    big = max(a, b);
    small = min(a, b);
    int j = 0;
    for (int i = 1; i <= big; i++)
    {
        if (big % i == 0)
        {
            storeA[j] = {i};
            j++;
        }
    }

    int storeB[1000], l = 0;
    for (int k = 0; k < j; k++)
    {
        if (small % storeA[k] == 0)
        {
            storeB[l] = {storeA[k]};
            l++;
        }
    }
    cout << storeB[l - 1] << endl;
}