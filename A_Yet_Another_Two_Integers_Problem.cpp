#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n;
    while(n--){
        long long a, b;
        cin >> a >> b;
        long long dif = abs(a - b);
        
        if(dif % 10 == 0){
            cout << dif / 10 << "\n";
        }else{
            cout << dif / 10 + 1 << "\n";
        }
        
    }
    
    return 0;
}