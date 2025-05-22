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
        vector<int> nums;
        for(auto i = 0; i < n; i++){
            int a;
            cin >> a;
            nums.push_back(a);
        }
        sort(nums.begin(), nums.end());
        
        if(n == 1){
            cout << "YES\n";
        }else{
            bool notThere = true;
            for(auto i = nums[0]; i <= nums[n-1]; i++){
                int cnt(0);
                for(auto j = 0; j < n; j++){
                    if(i == nums[j]){
                        cnt ++;
                        break;
                    }
                }
                if(cnt == 0){
                    cout << "NO\n";
                    notThere = false;
                    break;
                }else{
                    notThere = true;
                }

                }
                if(notThere){
                    cout << "YES\n";
                }
               
            }
        }
        return 0;
    }

    
