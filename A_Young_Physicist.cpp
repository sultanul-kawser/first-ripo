#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 
    cin>>n; 

    int mat[n][3];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<3; j++){
            cin>>mat[i][j];
        }
       
    }
     int sum1 = 0;
     int sum2 = 0;
     int sum3 = 0;
    for(int i = 0; i<n; i++){
       sum1 += mat[i][0];
       sum2 += mat[i][1];
       sum3 += mat[i][2];
    }
    if(sum1 == 0 && sum2 == 0 && sum3 == 0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
}    