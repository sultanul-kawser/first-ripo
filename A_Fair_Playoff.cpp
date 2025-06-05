#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int num[4];
        for(auto i = 0; i < 4; i ++){
            cin >> num[i];
        }
        int first_quali = max(num[0], num[1]);
        int second_quali = max(num[2], num[3]);
        int first_nonquali = min(num[0], num[1]);
        int second_nonquali = min(num[2], num[3]);
        if(first_quali < second_nonquali){
            cout << "NO\n";
        }else if(second_quali < first_nonquali){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    
    return 0;
}