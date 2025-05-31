#include <bits/stdc++.h>
using namespace std;
void result(int t){
    long long n;
    cin >> n;
    long long cnt(0);
    while(1){
        if(n == 1){
            cout << cnt << "\n";
            return;
        }
        else if((n * 2) % 6 != 0){
            cout << "-1\n";
            return;
        }else if(n % 6 == 0){
            n /= 6;
            cnt++;
        }else{
            n *= 2;
            cnt++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        result(t);
    }
    
    return 0;
}