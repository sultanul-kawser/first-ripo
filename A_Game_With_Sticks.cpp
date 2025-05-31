#include <bits/stdc++.h>
using namespace std;
void winner(int n, int m){
    int cnt(1);
    while(1){
        n -= 1;
        m -= 1;
        if(n == 0 || m == 0){
            if(cnt % 2 == 0){
                cout << "Malvika";
                return;
            }else{
                cout << "Akshat";
                return;
            }
        }
        cnt++;

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    winner(n, m);
    
    return 0;
}