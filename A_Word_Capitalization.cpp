#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    cin>>word;
    cout<<(char)toupper(word[0]);
    for(int i = 1; i<word.size(); i++){
        cout<<word[i];
    }
}