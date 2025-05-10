#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 
    cin>>n; 
    vector<string> state;
    for(int i = 1; i<=n; i++){
        string op;
        cin>>op;
        state.push_back(op);
    }
    int x = 0;
    for(int i = 0; i<state.size(); i++){
       
            if(state[i][1] == '+'){
                x++;
            }else if(state[i][1] == '-'){
                x--;
            }
        
    }
    cout<<x;
}