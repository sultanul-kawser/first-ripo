#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    long int a ;
    cin>>n;
    long int nums[n - 1];
    long long int lessSum = 0;
    long int big = 0;
    
    for (long int i = 0; i < n - 1; i++)
    {
        cin >> nums[i];
        lessSum += nums[i];
        
    }
    
    long double div = ((double)n)/2;
    long double realSum = (div * (((double)n) + 1));
    
    cout << realSum - lessSum;
    
}