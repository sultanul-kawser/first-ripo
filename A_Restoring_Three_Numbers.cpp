#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<long long> nums;
    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);
    nums.push_back(d);
    long long sum = max(max(a,b), max(c,d));
    long long A, B, C;
    auto it = remove(nums.begin(), nums.end(), sum);
    nums.erase(it, nums.end());
    sort(nums.begin(), nums.end());
    A = nums[0];
    B = nums[1];
    C = nums[2];
    c = ceil((double)C/2.0);
    b = c - abs(A - B);
    a = abs(A - b);
    cout << a << " " << b << " " << c;
    
    
    return 0;
}