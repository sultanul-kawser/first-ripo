#include<bits/stdc++.h>
using namespace std;
bool checkEven(int w){
    vector<int>evens;
    for(int i = 2; i<=w; i++){
        if(i%2== 0){
            evens.push_back(i);
        }
    }
    int i = 0; 
    int j = evens.size() - 1; 
    while(i<j){
        if(evens[i] + evens[j] > w){
            j--;
        }else if(evens[i] + evens[j] < w){
            i++;
        }else if(evens[i] + evens[j] == w){
            return true;
        }
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int w; 
    cin>>w;
   
     if(w%2 != 0){
        cout<<"NO";
    }else if((w/2)%2 == 0){
        cout<<"YES";
    }else if(checkEven(w)){
        cout<<"YES";
    }else {
        cout<<"NO";
    }
}