#include<bits/stdc++.h>
using namespace std;
bool isSequenced(vector<int> order, int n){
    int pointer = order[0];
    for(int i = 1; i<n; i++){
        if(order[i] != (pointer+1) || order[i] != (pointer-1)  ){
            return false;
        }
        pointer = order[i];
    }
    return true;
}
int main(){
    //F.IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //Code
    int testCase;
    cin>>testCase;
    for(int i = 0; i<testCase; i++){
        int n ;
        cin>>n;
        vector<int> order; 
        for(int i = 0; i<n; i++){
            int a;
            cin>>a;
            order.push_back(a);
        }
       if(isSequenced){
        cout<<"YES"<<"\n";
       }else{
        cout<<"NO\n";
       }
        
    }
    
}