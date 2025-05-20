#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n;
    int nums[n];
    for(int i = 0; i < n; i++){
       int a;
       cin >> a;
       nums[i] = a % 2;
    }
    int cnt0 = 0;
    int cnt1 = 0;
    for(auto i = 0; i < n; i++){
        if(nums[i] == 0){
            cnt0 ++;
        }else{
            cnt1 ++;
        }
    }
    if(cnt0 > cnt1){
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                cout << i + 1;
                break;
            }
        }
    }else{
            for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                cout << i + 1;
                break;
            }
        }
    }
    
    
    
    return 0;
}