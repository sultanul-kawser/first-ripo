#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int a ;
   long long int fact= 1;
   cin>>a;
   for (int i = 1; i<=a;i++){
    fact = (fact*i)%47;
   }
   cout<<fact<<endl;
   
    return 0 ;
}