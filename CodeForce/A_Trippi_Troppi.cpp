#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin>>testCase;
    for(int i = 0; i<testCase; i++){
        string first, middle, last;
        cin>>first>>middle>>last;
        cout<<first[0]<<middle[0]<<last[0];
        cout<<"\n";
    }
}