#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 
    cin>>n; 
    string players;
    cin>>players;
    int countAnik = 0;
    int countDanik = 0;
    for(int i = 0; i<n; i++){
        if(players[i] == 'A'){
            countAnik ++;
        }else if(players[i] == 'D'){
            countDanik ++;
        }
    }
    if(countAnik == countDanik){
        cout<<"Friendship";
    }else if(countAnik > countDanik){
        cout<<"Anton";
    }else if(countAnik < countDanik){
        cout<<"Danik";
    }
}