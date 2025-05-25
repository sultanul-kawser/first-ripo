#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string real = "Timur";
        string name;
        cin >> name;
        bool isSame = true;
        if(n != 5){
            cout << "NO\n";
        }else{
            for(int i = 0; i < n; i++){
            int cnt(0);
            for(int j = 0; j < n; j++){
                if(name[j] == real[i]){
                    cnt++;
                    break;
                }
            }
            if(cnt != 1){
                cout << "NO\n";
                isSame = false;
                break;
            }
        }
        if(isSame){
            cout << "YES\n";
        }
        }
    }
    
    return 0;
}