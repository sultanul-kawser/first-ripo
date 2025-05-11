#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 
    cin>>n;
    int sum = 0;
    int a; 
    for(int i = 1; i<=3*n; i++){
        cin>>a;
        sum += a;
    }


    if(sum == 0){
        cout<<"YES";
    }else {
        cout<<"NO";
    }
}    