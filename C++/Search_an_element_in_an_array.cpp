#include<iostream>
using namespace std;
bool search(int nums[],int target,int n){
    for(int i = 0; i<n; i++){
        if(nums[i] == target){
            return true;
        }
    }
    return false;
}
int main(){
    int n,target;
    cin>>n>>target;
    int nums[n];
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    if(search(nums,target,n)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
}