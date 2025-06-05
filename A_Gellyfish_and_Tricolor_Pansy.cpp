#include <bits/stdc++.h>
using namespace std;
void winner(int t){
    long long GF, GF_K, F, F_K;
    cin >> GF >> F >> GF_K >> F_K; 
    if(GF < F_K || (GF_K < F_K)){
        cout << "Flower\n";
    }else{
        cout << "Gellyfish\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        winner(t);
    }
    
    return 0;
}