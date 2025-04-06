#include<iostream>
using namespace std;
int main(){
    int a,b;
    bool empty = false; 
    cin>>a>>b;
    for( a; a<=b; a++){
        int i = a;
       while(i>0){
        int rem = i%10;
        if(rem==4 && rem==7){
            empty = true;
        }
        i/=10;
       }
       if(empty){
        cout<<a<<" ";
       }
    //    empty = false;
    }

    // if(empty){
    //     cout<<"-1";
    // }
}