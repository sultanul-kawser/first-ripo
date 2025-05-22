#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        if(a >= 1900){
            cout << "Division 1\n";
        }else if(a >= 1600 && a <= 1899){
            cout << "Division 2\n";
        }else if(a >= 1400 && a <= 1599){
            cout << "Division 3\n";
        }else if(a <= 1399){
            cout << "Division 4\n";
        }
    }
    
    return 0;
}