#include<bits/stdc++.h>
using namespace std;
void checkSquar(long long sum){
    long long i = 1 , squar = 1;
    while(sum >= squar){
        
        if(sum == squar){
            cout<<"YES"<<'\n';
            return;
        }
        i++;
        squar = i*i;
    }
    cout<<"NO"<<"\n";
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 
    cin>>n; 
    for(int i = 1; i<=n; i++){
        int a; 
        long long sum = 0;
        cin>>a;
        for(int j = 1; j<=a; j++){
            long long b; 
            
            cin>>b; 
            sum+=b;
        }
        checkSquar(sum);
        
        

    }
}