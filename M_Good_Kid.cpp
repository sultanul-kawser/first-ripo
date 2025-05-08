#include<iostream>
using namespace std;
int main(){
    int testCase;
    cin>>testCase;
    int n;
    for(int i = 1; i<=testCase; i++){
        cin>>n;
        int nums[n] ;
        int product = 1;
        int small = 9;
        for(int i = 0; i<n; i++){
            cin>>nums[i];
            if(nums[i]<small){
                small = nums[i];
            }
           
        }
        small += 1;
        product *=small;
        for(int i = 0; i<n; i++){

            if(nums[i]==small){
                continue;
            }
            product *= nums[i];
        }
        cout<<product<<endl;
        
    }
    
}
