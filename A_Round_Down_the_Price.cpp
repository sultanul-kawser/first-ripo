#include <bits/stdc++.h>
using namespace std;
vector<long long> roundNum = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        long long a;
        cin >> a;
        if(a == 1){
            cout << 0 << '\n';
        }else{
            for(int i = 0; i < roundNum.size(); i++){
            if(i != 0 && roundNum[i] > a){
                cout << a - roundNum[i-1] << '\n';
                break;
            }else if(roundNum[i] == a){
                cout << 0 << '\n';
                break;
            }
        }
        }
        
    }
    
    return 0;
}