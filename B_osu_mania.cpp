#include <bits/stdc++.h>
using namespace std;
void position(){
    int n;
    cin >> n;
    vector<int> pos;
    for(int i = 1; i <= n; i++){
        string line;
        cin >> line;
        for(int j = 3; j >= 0; j--){
            if(line[j] == '#'){
                pos.push_back(j + 1);
                break;
            }
        }
        
    }
    reverse(pos.begin(), pos.end());
    for(auto val : pos){
            cout << val << " ";
        }
        cout << "\n";
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        position();
    }
    
    return 0;
}