#include <bits/stdc++.h>
using namespace std;
void total_point(){
    int total(0);
    int points;
    for(auto i = 1; i < 11; i++){
        if(i >= 5){
            points = 10 - i;
        }else{
            points = i;
        }
        string line;
        cin >> line;
        int cnt(0);
        for(auto j = 0; j < line.size(); j++){
            if(line[j] == 'X'){
                cnt++;
            }
        }
        total += (cnt * points);
        
    }
    cout << total << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        total_point();
    }
    
    return 0;
}