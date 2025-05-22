#include <bits/stdc++.h>
using namespace std;
void winner(vector<string> teams, int n){
    string firstTeam = teams[0];
    string secondTeam = teams[n-1];
    
    int cnt1(0), cnt2(0);
    for(auto i = 0; i < n; i++){
        if(firstTeam == teams[0]){
            cnt1++;
            if(cnt1 > n/2){
                cout << teams[i];
                return;
            }
        }else{
            cnt2++;
            if(cnt2 > n/2){
                cout << teams[i];
                return;
            }
        }
       

    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    string firstTeam;
    int cnt(0);
    vector<string> teams;
    for(auto i = 0; i < n; i++){
        string team;
        cin >> team;
        teams.push_back(team);
    }
    sort(teams.begin(), teams.end());
    if(n == 1){
        cout << teams[0];
    }else{
        winner(teams, n);
    }
    
    
    return 0;
}