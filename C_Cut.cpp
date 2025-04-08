#include<iostream>
#include<vector>
using namespace std; 
int main(){
    int n,a;
    cin>>n>>a;
    int nums[n];
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }

    for(int i = n-a; i<n ; i++){
        cout<<nums[i]<<" ";
    }

    for(int i = 0; i<n-a; i++){
        cout<<nums[i]<<" ";
    }

}