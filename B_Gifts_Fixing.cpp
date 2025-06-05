#include <bits/stdc++.h>
using namespace std;
long long totalOperations(vector<long long> candies, vector<long long> oranges, int n, long long smallCandy, long long smallOrange){
    long long total(0);
    for(auto i = 0; i < n; i++){
        long long candy = candies[i] - smallCandy;
        long long orange = oranges[i] - smallOrange;
        total += max(candy, orange);
    }
    return total;
}
long long smallCandy(vector<long long> candies, int n){
    long long small = INT_MAX;
    for(auto i = 0; i < n; i++){
        small = min(small, candies[i]);
    }
    return small;
}
long long smallOrange(vector<long long> oranges, int n){
    long long small = INT_MAX;
    for(auto i = 0; i < n; i++){
        small = min(small, oranges[i]);
    }
    return small;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> candies;
        vector<long long> oranges;
        for(auto i = 0; i < n; i++){
            long long a;
            cin >> a;
            candies.push_back(a);
        }
        for(auto i = 0; i < n; i++){
            long long a;
            cin >> a;
            oranges.push_back(a);
        }
        smallCandy(candies, n);
        smallOrange(oranges, n);
        cout << totalOperations(candies, oranges, n, smallCandy(candies, n), smallOrange(oranges, n)) << "\n";
    }
    

    
    return 0;
}