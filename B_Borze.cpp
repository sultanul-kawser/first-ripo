#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string code;
    cin >> code;
    for(auto i = 0; i < code.size(); i++){
        if(code[i] == '-'){
            if(code[i+1] == '.'){
                cout << 1;
                i++;
            }else if(code[i+1] == '-'){
                cout << 2;
                i++;
            }
        }else{
            cout << 0;
        }
    }
    
    return 0;
}