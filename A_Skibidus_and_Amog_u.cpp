#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n; 
    for(int i = 1; i <= n; i++){
        string line;
        cin >> line;
        if(line == "us"){
            cout << 'i' << '\n';
        }else{
            for(int j = 0; j < line.size() - 2; j++){
                cout << line[j];
            }
            cout << 'i' << '\n';
        }
    }
    
    return 0;
}