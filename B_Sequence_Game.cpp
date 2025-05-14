#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        vector<int> seqB;
        int n;
        cin >> n;
        int nums[n];
        for(int i = 0; i < n; i++){
            int a;
            cin >> nums[i];
        }
        for(int j = 0; j < n; j++){
            if(j == 0){
                seqB.push_back(nums[j]);
            }else if(j != 0 && nums[j-1] <= nums[j]){
                seqB.push_back(nums[j]);
            }else if(j != 0 && nums[j-1] > nums[j]){
                long long newNum = nums[j] - 1;
                if(newNum == 0){
                    newNum ++;
                }
                seqB.push_back(newNum);
                seqB.push_back(nums[j]);
            }
        }
        cout << seqB.size() << "\n";
        for(int val : seqB){
            cout << val << " ";
        }
        cout << "\n";
    }
    
    return 0;
}