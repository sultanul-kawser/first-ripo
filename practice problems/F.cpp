#include<iostream>
using namespace std;
int main()
{
    long long int N,M,sum,lastN,lastM;
    cin>>N>>M;
    lastN = N%10;
    lastM = M%10;
    sum = lastN+lastM;
    cout<<sum<<endl;

    

}