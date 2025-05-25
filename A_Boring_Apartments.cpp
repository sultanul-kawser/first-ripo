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
        int sumCnt = (n % 10) - 1;
        sumCnt *= 10;
        int cnt(0);
        while(n > 0){
            n = n / 10;
            cnt ++;
        }
        if(cnt == 1){
            cout << sumCnt + 1 << "\n";
        }else if(cnt == 2){
            cout << sumCnt + 3 << "\n";
        }else if(cnt == 3){
            cout << sumCnt + 6 << "\n";
        }else if(cnt == 4){
            cout << sumCnt + 10 << "\n";
        }

    }
    
    return 0;
}