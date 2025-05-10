#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n; 
    vector<int> val;
    for(int i = 1; i<= n*3; i++){
        int a; 
        cin>>a; 
        val.push_back(a);
    }
    
    int counter = 0;
    for(int i = 0; i<n; i++){
        int sum = 0; 
        int k = i*3;
        for(int j = 1; j<=3; j++){
            sum += val[k];
            k++;
            if(sum >= 2){
                counter ++;
                break;
            }

        }
    }
    cout<<counter;

}
