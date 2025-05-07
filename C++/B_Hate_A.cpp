#include <bits/stdc++.h>
using namespace std;
int main()
{
    string modString;
    cin >> modString;
   
    auto new_end = remove(modString.begin(), modString.end(),'a');
    modString.erase(new_end,modString.end());
    
    
    int len = modString.size();
   int i = 0; 
   int j = len/2;
    while(i<j){
        if(modString[i] != modString[j]){
            cout<<":(";
        }
        i++;
        j--;
    }

    return 0;
}