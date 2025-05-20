#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    int scores[t];
    for(int i = 0; i < t; i++){
        cin >> scores[i];
    }
    int lowest = min(scores[0],scores[1]);
    int highest = max(scores[0],scores[1]);
    
    int cnt = 1;
    if(highest == lowest){
        cnt = 0;
    }
    if(t == 1){
        cout << 0;
    }else if(t == 2){
        cout << 1;
    }else{
        for(int i = 0; i < t; i++){
            if(scores[i] > highest){
                highest = scores[i];
                cnt ++;
            }else if(scores[i] < lowest){
                lowest = scores[i];
                cnt++;
            }
        }
        cout << cnt;
    }
    
    return 0;
}