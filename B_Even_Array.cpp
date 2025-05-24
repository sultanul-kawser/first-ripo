#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> elem;
        vector<int> ind;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            a = a % 2;
            elem.push_back(a);
            int b = i % 2;
            ind.push_back(b);
        }
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(elem[i] != ind[i]){
                sum ++;
            }
        }
        
        if(sum % 2 == 0){
            cout << sum / 2 << "\n";
        }else{
            cout << -1 << "\n";
        }

    }
    
    return 0;
}