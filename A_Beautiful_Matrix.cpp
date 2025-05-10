#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int mat[5][5];
    vector<int> indexOne;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cin>>mat[i][j];
            if(mat[i][j] == 1){
                indexOne.push_back(i);
                indexOne.push_back(j);
            }
        }
    }
    int moves = abs((2-indexOne[0])) + abs((2-indexOne[1]));
    
    cout<<moves;
}