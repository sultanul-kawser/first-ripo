#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        long n, m;
        cin >> n >> m;
        if( n == m){
            cout << n << "\n";
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cout << 1 << " ";
                }
                cout << "\n";
            } 
        }
    }
    
    return 0;
}