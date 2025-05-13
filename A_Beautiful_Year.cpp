#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 
    cin>>n;
    bool isBeautiful = false; 
    while(1){
        n++;
        bool notDistinct = false;
        bool isDistinct = true;
        string year = to_string(n);
        for(int i = 0; i<year.size(); i++){
            for(int j = i+1; j<year.size(); j++){
                if(year[i] == year[j]){
                    notDistinct = true;
                    isDistinct = false;
                }
            }
            if(notDistinct){
                break;
            }
        }
        if(isDistinct){
            cout<<n;
            break;
        }
    }
    
}