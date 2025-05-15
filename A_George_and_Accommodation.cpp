#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    int cntRoom = 0;
    while(t--){
        int living, capacity;
        cin >> living >> capacity;
        if(capacity - living >= 2){
            cntRoom ++;
        }
    }
    cout << cntRoom;
    
    return 0;
}