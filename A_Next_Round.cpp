#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k ;
    cin>>n>>k;
    int sum = 0;
    vector<int> nums;
    for(int i = 0; i<n; i++){
        int a; 
        cin>>a; 
        sum += a; 
        nums.push_back(a);
    }
    bool isZero = false;
    if(sum == 0){
        cout<<0;
    }else{
        for(int i = n-1; i>=0; i--){
        if(nums[i] != 0){
            if(nums[i]>= nums[k-1]){
                cout<<i+1;
                break;
            }
        }
    }
    }
    

}