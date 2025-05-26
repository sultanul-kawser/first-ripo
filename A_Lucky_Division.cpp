#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n;
    bool isLucky = true;
    if(n % 4 == 0 || n % 7 == 0){
        cout << "YES";
    }else{
         while(n > 0){
            int rem = n % 10;
            if(rem == 4 || rem == 7){
                cout << "YES";
                isLucky = false;
                break;
            }
            n = n / 10;
         }
         if(isLucky){
            cout << "NO";
         }
    }
   
    
    return 0;
}