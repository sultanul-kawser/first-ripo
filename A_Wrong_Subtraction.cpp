#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n,k; 
    cin>>n>>k;
    
    while(k != 0){
        if(n%10 == 0){
            n /= 10;
            k--;
        }else{
            n--;
            k--;
        }
    }
    cout<<n;

}