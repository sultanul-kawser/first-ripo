#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string line,upper,lower;
    cin>>line;
    int upCount = 0;
    int lowCount = 0;
    for(int i = 0; i<line.size(); i++){
        if(islower(line[i])){
            lowCount++;
        }else{
            upCount ++;
        }
    }
    if(lowCount == upCount){
        for(int i = 0; i<line.size(); i++){
            cout<<(char)tolower(line[i]);
        }
    }else if(lowCount < upCount){
        for(int i = 0; i<line.size(); i++){
            cout<<(char)toupper(line[i]);
        }
    }else if(lowCount > upCount){
        for(int i = 0; i<line.size(); i++){
            cout<<(char)tolower(line[i]);
        }
    }
}