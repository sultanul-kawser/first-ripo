#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int first = (a ^ b); // 0
    
    int second = (c | d); // 1
    int third = (b & c); // 1
    int fourth = (a ^ d); // 1
   
    int fifth = (first & second);
    int sixth = (third | fourth);
    
    cout << (fifth ^ sixth);
    
    
    
    
    
    
    
    return 0;
}