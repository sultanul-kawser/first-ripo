#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        string sent;
        cin>>sent;
        int count = 0;
        string compSent = "codeforces";
        for(int j = 0; j< 10; j++){
            if(sent[j] != compSent[j]){
                count ++;
            }
        }
        cout<<count<<endl;
    }

}