#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n; 
    while(n--){
        int distance[4];
        int cnt = 0;
        for(auto i = 0; i < 4; i++){
            cin >> distance[i];
            if(i != 0 && distance[0] < distance[i]){
                cnt ++;
            }
        }
        cout << cnt << "\n";
    }
    
    
    return 0;
}