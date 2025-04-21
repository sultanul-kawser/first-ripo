#include<iostream>
using namespace std;
int main()
{
    int row, col;
    cin>>row>>col;
    int nums[row][col];
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin>>nums[i][j];
        }
    }
    
    for(int i = 0; i<col; i++){
        long long int colSum = 0;
        for(int j = 0; j<row; j++){
            colSum += nums[j][i];
        }
        cout<<colSum<<endl;
    }
    
    
}