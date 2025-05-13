#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 
    cin>>n;
    vector<int> nums;
    bool isHard = false;
    for(int i = 0; i<n; i++){
        int a;
        cin>>a;
        if(a == 1){
            isHard = true;
        }
    }
    if(isHard){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }

}