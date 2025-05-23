#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int nums[n];
    int big = INT_MIN;
    for(auto i = 0; i < n; i++){
        cin >> nums[i];
        big = max(big, nums[i]);
    }
    int sum = 0;
    if(n == 1){
        cout << 0;
    }else{
        for(auto i = 0; i < n; i++){
            sum = sum + (big - nums[i]);
        }
        cout << sum;
    }
    
   
   
    
    return 0;
}