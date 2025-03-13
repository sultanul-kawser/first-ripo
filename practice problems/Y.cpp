#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,d,multi1,multi2,multi3,last2digit;
    cin>>a>>b>>c>>d;
    multi3 = (a*b*c*d);
    last2digit = (multi3)%100;
    cout<<last2digit; 
}