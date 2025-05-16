#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        long x, k;
        cin >> x >> k;
        if(x % k != 0){
            cout << 1 << '\n' << x << '\n';
        }else if( x % k == 0){
            cout << 2 << '\n' << 1 << " " << x-1 << '\n';
        }
    }
    
    return 0;
}