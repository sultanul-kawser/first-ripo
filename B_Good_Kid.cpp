#include <bits/stdc++.h>
using namespace std;
void present(int t){
    int n;
    cin >> n;
    int num[n];
    int small = INT_MAX;
    for(auto i = 0; i < n; i++){
        cin >> num[i];
        small = min(small, num[i]);
    }
    
    long long present = 1;
    int cnt(0);
    for(auto i = 0; i < n; i++){
       if(cnt != 1){
         if(num[i] == small){
            num[i] = small + 1;
            cnt++;
        }
       }
        present *= num[i];
    }
    
    cout << present << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        present(t);
    }
    
    return 0;
}