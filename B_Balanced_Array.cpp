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
        int k = n/2;
        if(k % 2 == 0){
            cout << "YES" << "\n";
            long long cntEven = 0;
            long long cntOdd = -1;
            for(int i = 1; i < n; i++){
                if(i >= 1 && i <= n/2){
                    cout << (cntEven += 2) << " ";
                }else if(i >= (n/2)+1 && i < n){
                    cout << (cntOdd += 2) << " ";
                }
            }
            int k = n/2;
            cout << k * (k+1) - (k-1) * (k-1) << '\n';
        }else{
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}