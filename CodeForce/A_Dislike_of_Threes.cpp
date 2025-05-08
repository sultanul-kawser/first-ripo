#include<bits/stdc++.h>
using namespace std;
const int N = 3200;
int main(){
    int n;
    cin>>n;
    vector<int> num;
    for(int i = 1; i<N;i++){
        if(i%3 == 0 || i%10 == 3){
            continue;
        }else{
            num.push_back(i);
        }

    }
    for(int i = 1; i<=n; i++){
            int a;
            cin>>a;
            a--;
            cout<<num[a]<<endl;

    }
    return 0;
}