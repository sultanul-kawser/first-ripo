#include<iostream>
using namespace std;
int main(){
    int t; 
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n; 
        char rounds[n];
        int countT = 0, countP = 0; 
        for(int j = 0; j<n; j++){
            cin>>rounds[j];
            if(rounds[j] == 'T'){
                countT++;
            }else if(rounds[j] == 'P'){
                countP++;
            }
        }
        if(countT<countP){
            cout<<"Pathaan\n";
        }else if(countT>countP){
            cout<<"Tiger\n";
        }else {
            cout<<"Draw\n";
        }

    }
}