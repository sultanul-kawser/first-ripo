#include <bits/stdc++.h>
using namespace std;
void answer(){
    int n;
    cin >> n;
    string line;
    cin >> line;
    int x = 0, y = 0;
    for(auto i = 0; i < n; i++){
        if(line[i] == 'U'){
            y++;
        }else if(line[i] == 'D'){
            y--;
        }
        if(line[i] == 'R'){
            x++;
        }else if(line[i] == 'L'){
            x--;
        }
        if(x == 1 && y == 1){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        answer();
    }
    
    return 0;
}