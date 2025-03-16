#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,d,multi1,multi2,multi3;
    cin>>a>>b>>c>>d;
    multi3 = (a*b)%100;
    multi1 = multi3*(c%100);
    multi2 = multi1*(d%100);
   
    
    cout<<(multi2/10)%10<<multi2%10;
    
    
     
}