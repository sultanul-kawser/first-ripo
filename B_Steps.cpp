#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, m;
    cin >> n >> m;
    long long x, y;
    cin >> x >> y;
    long long k;
    cin >> k;
    long long stepCnt = 0;
    for(int i = 0; i < k; i++){
        long long a, b;
        cin >> a >> b;
        while(1){
            if(a != 0){
                x += a;
            }
            if(b != 0){
                y += b;
                
            }
            
            if(x != 0 && y != 0 && x <= n && y <= m){
                stepCnt ++;
            }else{
                x -= a;
                y -= b;
                break;
            }
        }
    }
    cout << stepCnt;
    return 0;
}