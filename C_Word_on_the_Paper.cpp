#include <bits/stdc++.h>
using namespace std;
void answer(){
    vector<char> ans;
    for(auto i = 0; i < 8; i++){
        string line;
        cin >> line;
        for(auto j = 0; j < 8; j++){
            if(line[j] >= 'a' && line[j] <= 'z'){
                ans.push_back(line[j]);
            }
        }
    }
    for(auto val : ans){
        cout << val;
    }
    cout << '\n';
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