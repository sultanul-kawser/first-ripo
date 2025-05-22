#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    while(n--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a == b){
            cout << c << "\n";
        }else if(a == c){
            cout << b << "\n";
        }else if(b == c){
            cout << a << "\n";
        }
    }
    
    return 0;
}