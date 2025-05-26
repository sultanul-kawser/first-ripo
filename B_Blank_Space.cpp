#include <bits/stdc++.h>
using namespace std;
void checkSpace(int n){
    while(n--){
        int a;
        cin >> a;
        int num[a];
        int cnt(0);
        vector<int> totalCnt;
        for(int i = 0; i < a; i++){
            cin >> num[i];
            
             if(num[i] == 0){
                cnt++;
                
            }else{
                totalCnt.push_back(cnt);
                cnt = 0;
            }
        }
        totalCnt.push_back(cnt);
        
        int big = INT_MIN;
        for(auto val : totalCnt){
            big = max(big, val);
        }
        cout << big << "\n";
        
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    checkSpace(n);
    
    
    return 0;
}