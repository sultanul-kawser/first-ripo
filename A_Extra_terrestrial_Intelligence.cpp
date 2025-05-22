#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n;
    string line;
    cin >> line;
    int cnt1 = 0, cnt2 = 0;
    int comp = 0;
    for(auto i = 0; i < n; i++){
       if(line[i] == '1'){
            
       }else{
            cnt1++;
            comp = cnt1;

       }
    }
   
    
    return 0;
}