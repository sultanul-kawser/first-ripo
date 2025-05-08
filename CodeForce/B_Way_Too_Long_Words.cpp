#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        string sent;
        cin>>sent;
        int length = size(sent);
        if(length <= 10){
            cout<<sent<<endl;
        }else{
            cout<<sent[0]<<length-2<<sent[length-1]<<endl;
        }
    }
    
}