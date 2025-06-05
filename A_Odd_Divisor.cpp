#include <bits/stdc++.h>
using namespace std;
void odd_divisor(long long num){
    if(num % 2 != 0){
        cout << "NO\n";
    }else if(num % 2 == 0 || num % 3 == 0){
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    while(n--){
        long long num;
        cin >> num;
        odd_divisor(num);
    }
    
    return 0;
}