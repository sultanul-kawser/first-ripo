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
        int storeMulti = a * b * c;
        for(int i = 1; i <= 5; i++){
            int small = min({a, b, c});
            if(small == a){
                a++;
            }else if(small == b){
                b++;
            }else if(small == c){
                c++;
            }
        }
        cout << a * b * c << '\n';
    }
    
    return 0;
}