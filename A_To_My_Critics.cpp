#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for(auto i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b >= 10){
            cout << "YES\n";
        }else if(b + c >= 10){
            cout << "YES\n";
        }else if(a + c >= 10){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    
    return 0;
}