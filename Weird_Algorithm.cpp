#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n; 
    cout << n << " ";
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
            cout << n << " ";
        }else if(n % 2 != 0){
            n = (n * 3) + 1;
            cout << n << " ";
        }
    }
    
    return 0;
}