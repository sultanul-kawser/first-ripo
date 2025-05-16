#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n;
    double sum = 0; 
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        sum = sum + ((double)a / (double)100);
    }
    cout << fixed << setprecision(12) << 100 * (sum / n);
    return 0;
}