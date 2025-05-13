#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int n, t;
    cin>>n>>t;
    string line;
    cin>>line;
    vector<char> newLine;
    while(t){
        t--;
        for(int i = 0; i<n; i++){
            if(line[i] == 'B'){

                if(i < n-1 && line[i+1] == 'G'){
                    newLine.push_back('G');
                    newLine.push_back('B');
                    i++;
                }else{
                    newLine.push_back('B');
                }
            }else if(line[i] == 'G'){
                newLine.push_back('G');
            }
        }
        if(t != 0){
             line.assign(newLine.begin(),newLine.end());
             newLine.clear();
        }

    }
    for(char val : newLine){
        cout<<val;
    }
}