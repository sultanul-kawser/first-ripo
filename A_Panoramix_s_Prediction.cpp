#include <bits/stdc++.h>
using namespace std;
void checkPrime(int n, int m){
    for(auto i = n+1; i < m; i++){
        bool iIsPrime = true;
        for(auto j = 2; j < i; j++){
            if(i % j == 0){
                iIsPrime = false;
                break;
            }
        }
        if(iIsPrime){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    bool mIsPrime = true;
    for(auto i = 2; i < m; i++){
        if(m % i == 0){
            cout << "NO";
            mIsPrime = false;
            break;
        }
    }
    if(mIsPrime){
        checkPrime(n, m);
    }
    
    return 0;
}