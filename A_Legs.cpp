#include <bits/stdc++.h>
using namespace std;
void countLegs(){
    int n;
    cin >> n;
    cout << ceil((double)n / (double)4) << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        countLegs();
    }
    
    return 0;
}