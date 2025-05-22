#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int nums[n];
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        for(auto i = 0; i < n; i++){
            int cnt(0);
            for(auto j = 0; j < n; j++){
                if(nums[i] == nums[j]){
                    cnt++;
                }
            }
            if(cnt == 1){
                cout << i + 1 << "\n";
                break;
            }
        }
    }
    
    return 0;
}