#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
       if(a == b + c){
        cout << "YES\n";
       }else if(b == a + c){
        cout << "YES\n";
       }else if(c == a + b){
        cout << "YES\n";
       }else{
        cout << "NO\n";
       }
    }
    
    return 0;
}