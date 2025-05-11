#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long k,n,w,borrowAmount;
    cin>>k>>n>>w;
    long long totalAmount = 0;
    for(int i = 1; i<=w; i++){
        totalAmount = totalAmount + (i*k);
    }
    if(totalAmount - n < 0){
        cout<<0;
    }else {
        cout<<totalAmount - n;
    }
}