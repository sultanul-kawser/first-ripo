#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int a, b, c, d,first,second;
    cin >> a >> b >> c >> d;
    
    if(a>d||c>b)
    {
        cout<<"-1";
    }
    else
    {
        first = max(a,c);
        second = min(b,d);
        cout<<first<<" "<<second;
    }
    
}