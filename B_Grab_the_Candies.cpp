#include <bits/stdc++.h>
using namespace std;
void isPossible(){
    int n;
    cin >> n;
    int mihai(0), bianca(0);
    for(auto i = 1; i <= n; i++){
        int a;
        cin >> a;
        if(a % 2 == 0){
            mihai += a;
        }else{
            bianca += a;
        }
    }
    if(mihai > bianca){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        isPossible();
    }
    
    return 0;
}