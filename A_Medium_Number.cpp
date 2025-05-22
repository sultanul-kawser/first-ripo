#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    while(n--){
        vector<int> nums;
        int a, b, c;
        cin >> a >> b >> c;
        nums.push_back(a);
        nums.push_back(b);
        nums.push_back(c);
        sort(nums.begin(), nums.end());
        cout << nums[1] << "\n";

    }
    
    return 0;
}