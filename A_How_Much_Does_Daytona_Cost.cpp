#include <bits/stdc++.h>
using namespace std;
void isThere(int nums[], int n, int k){
    for(auto i = 0; i < n; i++){
        if(nums[i] == k){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        int k;
        cin >> n >> k;
        int nums[n];
        for(auto i = 0; i < n; i++){
            cin >> nums[i];
        }
        isThere(nums, n, k);
    }
    
    return 0;
}