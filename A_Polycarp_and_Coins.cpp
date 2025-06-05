#include <bits/stdc++.h>
using namespace std;
void result(){
    long long n;
    cin >> n;
    long long first, second;
    first = floor((double)n / (double)3);
    second = ceil((double)(n - first) / (double)2);
    if(first + second * 2 == n){
        cout << first << " " << second << "\n";
    }else{
        cout << second << " " << first << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        result();
    }
    
    return 0;
}