#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, big, small, storeA[1000];
    cin >> a >> b;
    
    // separating the big and small number from the input 
    // to calculate the divisor of the big number
    big = max(a, b);
    small = min(a, b);

    // finding the divisor of the big number 
    // and storing them in the storeA array
    int j = 0;
    for (int i = 1; i <= big; i++)
    {
        if (big % i == 0)
        {
            storeA[j] = {i};
            j++;
        }
    }

    //checking if the divisor of the small number is simillar to the divisor 
    // of the big number and storing them in the storeB array
    int storeB[1000], l = 0;
    for (int k = 0; k < j; k++)
    {
        if (small % storeA[k] == 0)
        {
            storeB[l] = {storeA[k]};
            l++;
        }
    }
    // printing the last element of the storeB array
    cout << storeB[l - 1] << endl;
}