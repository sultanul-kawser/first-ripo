#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    int i = 0, j = nums.size()-1;
    while(i<j){
    int pairSum = nums[i] + nums[j];
    if(pairSum>target){
       j--;
    }else if(pairSum<target){
        i++;
    }else{
        ans.push_back(i);
        ans.push_back(j);
        break;
    }
    }
    return ans;
    

}
int main()
{
    vector<int> nums = {3,2,4};
    int target = 6;
    for(int val : twoSum(nums,target)){
        cout<<val;
    }

}