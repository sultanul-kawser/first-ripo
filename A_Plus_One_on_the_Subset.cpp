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
        int num[n];
        for(int i = 0; i < n; i++){
            cin >> num[i];
        }
        int big = INT_MIN;
        int small = INT_MAX;
        for(int i = 0; i < n; i++){
            big = max(big, num[i]);
            small = min(small , num[i]);
        }
        cout << big - small << "\n";
    }
    
    return 0;
}