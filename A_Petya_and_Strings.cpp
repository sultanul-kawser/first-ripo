#include<bits/stdc++.h>
using namespace std;
int compValue(string str1, string str2){
    for(int i = 0; i<str1.size(); i++){
        if(tolower(str1[i]) > tolower(str2[i])){
            return 1;
        }else if(tolower(str1[i]) < tolower(str2[i])){
            return -1;
        }
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str1, str2;
    int sumStr1 = 0, sumStr2 = 0;
    cin>>str1>>str2;
   
    cout<<compValue(str1,str2);
    
}