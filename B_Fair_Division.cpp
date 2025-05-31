#include <bits/stdc++.h>
using namespace std;
void canDivide(int t){
    int n;
    cin >> n;
    int sum(0);
    for(auto i = 0; i < n; i++){
        int a; 
        cin >> a;
        sum += a;
    }
    if(sum % 2 != 0){
        cout << "NO\n";
    }else{
        if(n % 2 != 0){
            cout << "NO\n";
        }else{
            cout << "YES\n";
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
        canDivide(t);
    }
    
    return 0;
}
