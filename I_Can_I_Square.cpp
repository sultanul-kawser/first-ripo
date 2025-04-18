#include<iostream>
using namespace std;
bool checkSquar(long long int sum){
    for(long int i = 1; i<=(sum/2); i++){
        if(sum == i*i){
            return true;
        }
    }
    return false;
}
int main(){
    int t;
    
    cin>>t;
    
    for(int i = 0; i<t; i++){
        long int n;
        cin>>n;
        long int nums[n];
        long long int sum = 0;
        for(int j = 0; j<n; j++){
            cin>>nums[j];
            sum += nums[j];
        }
        
      if(checkSquar(sum)){
        cout<<"YES"<<endl;
      } else{
        cout<<"NO"<<endl;
      }
      
    }
}