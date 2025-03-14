#include<iostream>
using namespace std;
int main()
{
    char x;
long long int a,b,result;
    cin>>a>>x>>b;
    switch(x)
    {
        case '+':
        result = a+b;
        cout<<result;
        break;
        case '-':
        result = a-b;
        cout<<result;
        break;
        case '*':
        result = a*b;
        cout<<result;
        break;
        case '/':
        result = a/b;
        cout<<result;
        break;

    }
}