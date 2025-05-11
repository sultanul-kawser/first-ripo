#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 
    string box;
    cin>>n>>box;
    int counter = 0;
    for(int i = 0; i<n; i++){
        if(box[i] == box[i+1]){
            counter ++;
        }
    }
    cout<<counter;
}