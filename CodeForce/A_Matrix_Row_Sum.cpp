#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    int nums[row][col];
    for(int i = 0; i<row; i++){
        long long int rowSum = 0;
        for(int j = 0; j<col; j++){
            cin>>nums[i][j];
            rowSum += nums[i][j];
        }
        cout<<rowSum<<endl;
    }
}