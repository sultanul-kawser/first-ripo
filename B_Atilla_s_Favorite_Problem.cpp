#include <bits/stdc++.h>
using namespace std;
char bigChar(string line, int n){
    int big = INT_MIN;
    for(auto i = 0; i < n; i++){
        big = max(big, (int)line[i]);
    }
    return (char)big;
}
void answer(){
    int n;
    cin >> n;
    string line;
    cin >> line;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    for(auto i = 0; i < alpha.size(); i++){
        if(alpha[i] == bigChar(line, n)){
            cout << i+1 << "\n";
        }
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