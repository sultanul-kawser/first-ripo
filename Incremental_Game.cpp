#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    while(n--){
        int x, y, k;
        cin >> x >> y >> k;
        if(k >= x || k >= y){
            cout << "Alice\n";
        }else if(k < x || k < y){
            cout << "Bob\n";
        }
    }
    
    return 0;
}