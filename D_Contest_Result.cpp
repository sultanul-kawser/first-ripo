#include<iostream>
using namespace std; 
int main(){
    int n,m;
    cin>>n>>m;
    int pointsProblem[n];
    int solved;
    int totalPoints = 0;
    for(int i = 0; i<n; i++){
        cin>>pointsProblem[i];
    }
    for(int i = 0; i<m; i++){
        cin>>solved;
        totalPoints+=pointsProblem[solved-1];
    }
    cout<<totalPoints;

}