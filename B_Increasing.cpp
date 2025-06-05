#include <bits/stdc++.h>
using namespace std;
void answer(){
    int n;
    cin >> n;
    vector<long long> num;
    for(auto i = 0; i < n; i++){
        long long a ;
        cin >> a;
        num.push_back(a);
    }
    sort(num.begin(), num.end());
    for(auto i = 0; i < n; i++){
        if(i != n-1 && num[i] == num[i+1]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        answer();
    }
    
    return 0;
}