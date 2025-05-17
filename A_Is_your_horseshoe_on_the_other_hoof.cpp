#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<long long> nums;
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);
    nums.push_back(d);
    int cnt(0);
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(nums[i] == nums[j]){
                cnt ++;
                break;
            }
        }
    }
    cout << cnt;
    
    return 0;
}