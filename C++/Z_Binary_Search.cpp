#include<iostream>
using namespace std;
// bool binarySearch(long int nums[],long target,int n){
//     int start = 0;
//     int end = n- 1;
//     while(start<=end){
//         int mid = start + (end - start)/2;
//         if(nums[mid]>target){
//             end = mid-1;
//         }else if(nums[mid]<target){
//             start = mid+1;
//         }else {
//             return true;
//         }
//     }
//     return false;
// }
bool targetSearch(long long int nums[],long long target,long long int n){
    for(long long int i = 0; i<n ; i++){
        if(nums[i] == target){
            return true;
        }
    }
    return false;
}
int main(){
    long long int n,quirey;
    cin>>n>>quirey;
   long long int nums[n];
    for(long long int i = 0; i<n; i++){
        cin>>nums[i];
    }
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         if(nums[i]<nums[j]){
    //             int temp = nums[i];
    //             nums[i] = nums[j];
    //             nums[j] = temp;
    //         }
    //     }
    // }
    for(long long int i = 0; i<quirey; i++){
        long target;
        cin>>target;
        if(targetSearch(nums,target,n)){
            cout<<"found"<<endl;
        }else{
            cout<<"not found"<<endl;
        }
    }
}