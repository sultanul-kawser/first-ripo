#include<iostream>
using namespace std;
int main(){
    int row, col;
    cin>>row>>col;
    int nums[row][col];
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin>>nums[i][j];
        }
    }
    int target; 
    cin>>target;
    bool isThere = false;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(nums[i][j] == target){
                isThere = true;
            }
        }
    }
    if(isThere){
        cout<<"will not take number\n";
    }else {
        cout<<"will take number\n";
    }
}