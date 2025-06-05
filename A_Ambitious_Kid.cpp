#include <bits/stdc++.h>
using namespace std;
long lowest(long num[], long n){
    long small = INT_MAX;
    for(auto i = 0; i < n; i++){
        small = min(small , num[i]);
    }
    return small;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long n;
    cin >> n;
    long num[n];
    for(auto i = 0; i < n; i++){
        cin >> num[i];
        if(num[i] < 0){
            num[i] *= (-1);
        }
    }
    cout << lowest(num, n);
    
    return 0;
}