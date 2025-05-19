#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string guest, host, shuffled;
    cin >> guest >> host >> shuffled;

    string guest_host = guest + host;
    int len = guest_host.size();

    sort(guest_host.begin(), guest_host.end());
    sort(shuffled.begin(), shuffled.end());
    bool isSame = true;
    if(guest_host.size() != shuffled.size()){
        cout << "NO";
        isSame = false;
    }else{
        for(auto i = 0; i < len; i++){
            if(guest_host[i] != shuffled[i]){
                cout << "NO";
                isSame = false;
                break;
            }
        }
    }
    if(isSame){
        cout << "YES";
    }
    
    
    
    return 0;
}