#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        long long a, b, c, n;
        cin >> a >> b >> c >> n;
        long long mostCoin = max(a, max(b, c));
        
        long long coinsNeed = 0;
        if(mostCoin > a){
            coinsNeed += (mostCoin - a);
        } if(mostCoin > b){
            coinsNeed += (mostCoin - b);
        } if(mostCoin > c){
            coinsNeed += (mostCoin - c);
        }
        
        if(coinsNeed > n){
            cout << "NO\n";
        }else if((n - coinsNeed) % 3 == 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
       
    }
    
    return 0;
}