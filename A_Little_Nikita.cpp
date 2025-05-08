#include<bits/stdc++.h>
using namespace std;
int main(){
    //F.IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //Code
    int testCase;
    cin>>testCase;
    for(int i = 0; i<testCase; i++){
        int n,m;
        cin>>n>>m;
        if(n==m){
            cout<<"Yes\n";
        }else if(n<m){
            cout<<"No\n";
        }else if(n>m && (n-m)%2 == 0){
            cout<<"Yes\n";
        }else{
            cout<<"NO\n";
        }
    }
}