#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   string a, b;
   cin >> a >> b;
   int len = a.size();
   for(int i = 0; i < len; i++){
    if(a[i] == b[i]){
        cout << '0';
    }else{
        cout << '1';
    }
   }
    
    return 0;
}