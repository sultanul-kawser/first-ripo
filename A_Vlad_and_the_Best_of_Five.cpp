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
        cin >>line;
        int cntA = 0, cntB = 0;
        for(auto i = 0; i < line.size(); i++){
            if(line[i] == 'A'){
                cntA++;
            }else{
                cntB ++;
            }
        }
        if(cntA > cntB){
            cout << "A\n";
        }else{
            cout << "B\n";
        }
    }
    
    return 0;
}