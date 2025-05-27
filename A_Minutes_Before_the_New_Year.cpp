#include <bits/stdc++.h>
using namespace std;
void minutesRemaining(int t){
    int hour, minute;
    cin >> hour >> minute;
    int minuteRemaining = (23 - hour) * 60;
    minuteRemaining += (60 - minute);
    cout << minuteRemaining << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        minutesRemaining(t);
    }
    
    return 0;
}