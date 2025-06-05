#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    char pixels[n][m];
    bool isBlack = true;
    bool shouldContinue = false;
    for(auto i = 0; i < n; i++){
        for(auto j = 0; j < m; j++){
            cin >> pixels[i][j];
            if(pixels[i][j] == 'C' || pixels[i][j] == 'M' || pixels[i][j] == 'Y'){
                cout << "#Color";
                shouldContinue = true;
                isBlack = false;
                break;
            }
        }
        if(shouldContinue){
            break;
        }
    }
    if(isBlack){
        cout << "#Black&White";
    }
    
    return 0;
}