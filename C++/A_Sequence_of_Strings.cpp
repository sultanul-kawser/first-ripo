#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<string> name;
    char value[11];
    for(int i = 0; i<n; i++){
       scanf("%s",&value);
        name.push_back(value);
        
    }
  for(int i = n-1; i>=0; i--){
    cout<<name[i]<<endl;
  }
}
