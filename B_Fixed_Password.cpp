#include<iostream>
using namespace std;
int main(){
    int n;
    for ( int i = 1; i<=10000; i++){
        cin>>n;
        if(n == 1999){
            cout<<"Correct\n";
            break;
        } else {
            cout<<"Wrong\n";
        }
    }
    return 0; 
}