#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin >> t;
    while(t--){
        string line;
        cin >> line;
        if(line.size() % 2 == 1){
            cout << "NO\n";
        }else{
            int j = line.size() / 2;
            bool isSuper = true;
            for(int i = 0; i < j; i++){
                if(line[i] != line[j + i]){
                    cout << "NO\n";
                    isSuper = false;
                    break;
                }
            }
            if(isSuper){
                cout << "YES\n";
            }
        }
    }
    
    return 0;
}