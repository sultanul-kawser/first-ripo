#include<iostream>
using namespace std;
int main(){
    long long int a ; 
    cin>>a; 
    // iteration 12 times according to the prblm
    for(int i = 1; i<=12; i++){
        //output will be a * i = a*i
        cout<<a<<" * "<<i<<" = "<<(a*i)<<endl;
    }
}