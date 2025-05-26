#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin >> t;
    while(t--){

    
    string line;
    cin >> line;
    int pow = 1;
    int year = 0;
    for(auto i = 3; i >= 0; i--){
        int num = (int)line[i] - (int)'0';
       
        year += (pow*num);
        pow *= 10;
    }
    int comp = sqrt(year);
    double check = sqrt((double)year);
    if(check > comp){
        cout << -1 << "\n";
    }else{
        int a = comp / 2;
        int b = comp - a;
        cout << a << " " << b << "\n";
    }
    
    
    }
    

    
    return 0;
}