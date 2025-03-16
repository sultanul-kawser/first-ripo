#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n<=999){
        cout<<n<<endl;
    } else if(n>=1000 && n<=9999){
        n = n - (n%10);
        cout<<n;
    } else if(n>=10000 && n<=99999){
        n = n - (n%100);
        cout<<n;
    } else if(n>=100000 && n<=999999){
        n = n-(n%1000);
        cout<<n;
    } else if(n>=1000000 && n<=9999999){
        n = n-(n%10000);
        cout<<n;
    } else if(n>=10000000 && n<=99999999){
        n = n-(n%100000);
        cout<<n; 
    } else if(n>=100000000&&n<=999999999){
        n = n-(n%1000000);
        cout<<n;
    }


}