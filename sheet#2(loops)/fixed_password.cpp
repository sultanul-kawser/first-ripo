#include<iostream>
using namespace std;
int main(){
    int n;
    // taking input inside the loop and 
    // checking if the input is the password
    // so that it can check one input at a time 
    // and print the output 
    for(int i = 1; i<=10000; i++){
        cin>>n;
        //cheking if the input is the password
        if(n== 1999){
            cout<<"Correct\n";
        } else {
            cout<<"Wrong\n";
        }

    }
    return 0; 
}