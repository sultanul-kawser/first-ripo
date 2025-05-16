#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int days, sumTime;
    cin >> days >> sumTime;
    int minTime[days];
    int maxTime[days];
    int sumMinTime = 0;
    int sumMaxTime = 0;
    for(int i = 0; i < days; i++){
        cin >> minTime[i] >> maxTime[i];
        sumMinTime = sumMinTime + minTime[i];
        sumMaxTime = sumMaxTime + maxTime[i];
    }
    if(sumTime >= sumMinTime && sumTime <= sumMaxTime){
        if(sumTime == sumMinTime){
            cout << "YES\n";
            for(int val : minTime){
                cout << val << " ";
            }
        }else if(sumTime == sumMaxTime){
            cout << "YES\n";
            for(int val : maxTime){
                cout << val << " ";
            }
        }
    }else{
        cout << "NO";
    }
    
    
    return 0;
}