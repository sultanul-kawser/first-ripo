#include <bits/stdc++.h>
using namespace std;
void answer(){
    int n;
    cin >> n;
    long long sum(0);
    for(auto i = 0; i < n; i++){
        int a;
        cin >> a;
        sum += a;
    }
    long long result = sum - n;
    if(result < 0){
        cout << 1 << "\n";
    }else{
        cout << result << "\n";
    }
    
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