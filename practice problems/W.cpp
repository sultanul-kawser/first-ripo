#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c;
    char s,j;
    cin>>a>>s>>b>>j>>c;
    switch(s)
    {
        case '+':
        if(a+b == c)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<(a+b);
        }
        break;
        case '-':
        if(a-b == c)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<(a-b);
        }
        break;
        case '*':
        if(a*b == c)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<(a*b);
        }
        break;
    }
}