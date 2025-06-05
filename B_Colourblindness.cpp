#include <bits/stdc++.h>
using namespace std;
void check(int t){
    int n;
    string line1;
    string line2;
    cin >> n;
    cin >> line1 >> line2;
    for(auto i = 0; i < n; i++){
        if(line1[i] == 'G'){
            line1[i] = 'B';
        }
        if(line2[i] == 'G'){
            line2[i] = 'B';
        }
    }
    if(line1 == line2){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        check(t);
    }
    
    return 0;
}