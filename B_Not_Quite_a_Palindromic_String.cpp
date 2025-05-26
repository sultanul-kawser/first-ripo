#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string line;
        cin >> line;
        int cnt0(0);
        int cnt1(0);
        for(auto ch : line){
            if(ch == '0'){
                cnt0 ++;
            }else{
                cnt1++;
            }
        }
        bool hobe = false;
        int total = (n / 2) - k;
        if(cnt0 >= total && cnt1 >= total){
            if((cnt0 - total) % 2 == 0 && (cnt1 - total) % 2 == 0){
                int total2 = (cnt0 - total) / 2;
                if(total2 >= 0 && total2 <= k){
                    hobe = true;
                }
            }
        }
        if(hobe){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    
    return 0;
}