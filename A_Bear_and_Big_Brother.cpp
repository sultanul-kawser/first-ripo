#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin>>a>>b;
    if(a == b){
        cout<<1;
    }else if(a<b){
        int counter = 1;
        while(a<b){
            a*=3;
            b*=2;
            if(a<=b){
                counter ++;

            }
        }
        cout<<counter;
    }
}