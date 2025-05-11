#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string name; 
    cin>>name;
    vector<char> serial;
    serial.push_back(name[0]);
     
    for(int i = 1; i<name.size(); i++){
        bool isDif = true;;
        for(int j = 0; j<serial.size(); j++){
            if(name[i] == serial[j]){
                isDif = false;
            }
        }
        if(isDif){
            serial.push_back(name[i]);
        }
    }
    if(serial.size() % 2 == 0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";    
    }


}