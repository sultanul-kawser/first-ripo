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
        int trace[n];
        vector<int> arr(26,0);
        for(int i = 0; i < n; i++){
            cin >> trace[i];
        }for(int i = 0; i < n; i++){
            for(int j = 0; j < 26; j++){
                if( trace[i] == arr[j] ){
                    cout << (char)(j + 'a');
                    arr[j] ++;
                    break;
                }
            }
        }
        cout << '\n';
    }
    
    return 0;
}