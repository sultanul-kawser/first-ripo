#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int start_hour, start_min, end_hour, end_min;
    cin >> start_hour >> start_min >> end_hour >> end_min;
    int start_time = (start_hour * 60) + start_min;
    int end_time = (end_hour * 60) + end_min;
    if(start_time == end_time){
        cout << "O JOGO DUROU " << 24 << " HORA(S) E " << 0 << " MINUTO(S)\n";
    }else if(start_time < end_time){
        int time_spent = end_time - start_time;
        int hour_spent = floor((double)time_spent / (double)60);
        
        int minute_spent = time_spent - (60 * hour_spent);
        cout << "O JOGO DUROU " << hour_spent << " HORA(S) E " << minute_spent << " MINUTO(S)\n";
    }else if(start_time > end_time){
        int time_spent = (1440 - start_time) + end_time;
        int hour_spent = floor((double)time_spent / (double)60);
        
        int minute_spent = time_spent - (60 * hour_spent);
        cout << "O JOGO DUROU " << hour_spent << " HORA(S) E " << minute_spent << " MINUTO(S)\n";
    }
    
    return 0;
}