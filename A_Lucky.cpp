#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n;
    while(n--){
        string ticket;
        cin >> ticket;
        int firstSum = 0;
        int secondSum = 0;
        for(auto i = 0; i < 6; i++){
            if(i >= 0 && i <= 2){
                firstSum += ticket[i] - '0';
            }else{
                secondSum += ticket[i] - '0';
            }
        }
        if(firstSum == secondSum){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    
    return 0;
}