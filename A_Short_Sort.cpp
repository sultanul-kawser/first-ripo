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
        if(line == "abc"){
            
            cout << "YES\n";
        }else if(line[0] == 'a'){
            
            cout << "YES\n";
        }else if(line[0] == 'b' && line[1] == 'a'){
            cout << "YES\n";
        }else if(line[0] == 'c' && line[1] == 'b'){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    
    return 0;
}