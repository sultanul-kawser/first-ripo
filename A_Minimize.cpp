#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int big = INT_MIN;
        for(auto i = a; i <= b; i++){
            int c = (i-a) + (b-i);
            big = max(big, c);
        }
        cout << big << "\n";
    }
    
    return 0;
}