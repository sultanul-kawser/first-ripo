#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int totalProblems, timeToReach;
    cin >> totalProblems >> timeToReach;
 
    for(auto i = totalProblems; i > 0; i--){
        int solveTime = 5 * ((i * (1 + i)) / 2);
        if( solveTime + timeToReach <= 240){
            cout << i;
            break;
        }else if(i == 1 && 5 + timeToReach > 240){
            cout << 0;
            break;
        }
    }
    
    
    return 0;
}