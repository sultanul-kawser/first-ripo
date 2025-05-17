#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    int sum = 0;
    while(t--){
        string cubes;
        cin >> cubes;
        if(cubes[0] == 'T'){
            sum += 4;
        }else if(cubes[0] == 'C'){
            sum += 6;
        }else if(cubes[0] == 'O'){
            sum += 8;
        }else if(cubes[0] == 'D'){
            sum += 12;
        }else if(cubes[0] == 'I'){
            sum += 20;
        }
    }
    cout << sum;
    
    return 0;
}