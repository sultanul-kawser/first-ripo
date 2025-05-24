#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(b > a && b > c){
            cout << "PEAK\n";
        }else if(a < b && a < c && b < c){
            cout << "STAIR\n";
        }else{
            cout << "NONE\n";
        }
    }
    
    return 0;
}