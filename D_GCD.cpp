#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, storeA[1000], storeB[1000], j = 0, m = 0, k = 0, e = 0;
    cin >> a >> b;
    // finding the divisors for a 
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            // storing the divisors of a inside storeA
            storeA[j] = {i};
            j++;
            m++;
        }
    }
    // finding the divisors for b 
    for (int d = 1; d <= a; d++)
    {
        if (b % d == 0)
        {
            // storing the divisors of b inside storeB 
            storeB[e] = {d};
            e++;
            k++;
        }
    }
}