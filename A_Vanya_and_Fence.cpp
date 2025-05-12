#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,h;
    cin>>n>>h;
    int height[n];
    for(int i = 0; i<n; i++){
        cin>>height[i];
    }
    int width = 0;
    for(int i = 0; i<n; i++){
        if(height[i] > h){
            width += 2;
        }else{
            width++;
        }
    }
    cout<<width;
}