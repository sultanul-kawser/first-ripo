#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, x;
    cin >> n >> x;
    long long disCnt = 0;
    for(int i = 1; i <= n; i++){
        char person;
        long long val;
        cin >> person >> val;
        if(person == '+'){
            x += val;
        }else if(person == '-'){
            if(x < val){
                disCnt ++;
            }else{
                x -= val;
            }
        }
    }
    cout << x << " " << disCnt;
    
    return 0;
}