#include<bits/stdc++.h>
using namespace std;
// find target pair =>
vector<int> linearSearch(int row, int col,int nums[][5], int target ){
    vector<int> pair;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(nums[i][j] == target){
                pair.push_back(i);
                pair.push_back(j);
                return pair;
            }
        }
    }
    pair.push_back(-1);
    return pair;
}
// find max row sum =>
int maxRowSum(int row, int col, int nums[][5]){
    int maxSum = 0;
    for(int i = 0; i<row; i++){
        int rowSum = 0;
        for(int j = 0; j<col; j++){
            rowSum += nums[i][j];
        }
        if(rowSum > maxSum){
            maxSum = rowSum;
        }
    }
    return maxSum;
}

int main(){
    int row = 5,col = 5;
    
    int target;
    cin>>target;
    int nums[5][5] = {
                        {1,2,3,4,5},
                        {6,7,8,9,10},
                        {11,12,13,14,15},
                        {16,17,18,19,20},
                        {21,22,23,24,25}};
    // output => target pair
    for(int val : linearSearch(row,col,nums,target)){
        cout<<val<<" ";
    }
    //output => max row sum
    cout<<maxRowSum(row,col,nums);
}