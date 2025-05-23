#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    int times[n];
    int cnt(0);
    for(auto i = 0; i < n; i++){
        cin >> times[i];
        times[i] += k;
        if(times[i] <= 5){
            cnt++;
        }
    }
    cout << cnt/3;
    
    
    return 0;
}