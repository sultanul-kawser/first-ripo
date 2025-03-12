#include<iostream>
using namespace std;
int main()
{
    long long int a , b , c , d ;
    cin >> a >> b >> c >> d ;
    if(a>=c && b>=d)
    {
        if(c>a && d>b)
        {
            cout<<(b-c);
        }
    }
}