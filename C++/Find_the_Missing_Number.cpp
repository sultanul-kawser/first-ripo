#include<iostream>
#include<cmath>
using namespace std;
int checkNum(int nums[], long long int multi, int m){
    double realNum = (double)m/multi;
    int compNum = abs(realNum);
    if(realNum == compNum){
        return m/multi;
    }else{
        return -1;
    }
}
int main(){
    int t; 
    cin>>t;
    for(int i = 0; i<t; i++){
        int m;
        cin>>m;
        int nums[3];
        long long int multi = 1;
        for(int j = 0; j<3 ;j++){
            cin>>nums[j];
            multi *= nums[j];
        }
        cout<<checkNum(nums,multi,m)<<endl;

    }
}