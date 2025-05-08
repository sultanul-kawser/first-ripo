#include<bits/stdc++.h>
using namespace std;
int main(){
    // F.IO
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    // Code
    int n;
    cin>>n;
    vector<string> poles;
    for(int i = 1; i<= n; i++){
        string in ;
        cin>>in;
        poles.push_back(in);
    } 
    int len = poles.size();
    string comp = poles[0];
    int i = 0;
    int counter = 0;
    while(i<len){
        if(comp != poles[i]){
            comp = poles[i];
            counter ++;
        }
        i++;
    }
    cout<<counter + 1;
}