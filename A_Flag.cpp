#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    vector<string> flag;
    bool isStan = true;
    for(int i = 0; i < n; i++){
        bool notStan = false;
        string a;
        cin >> a;
        flag.push_back(a);
        if(i != 0 && flag[i] == flag[i-1]){
            cout << "NO";
            isStan = false;
            break;
        }
        char ch = a[0];
        for(int j = 0; j < m; j++){
            if(ch != a[j]){
                cout << "NO";
                notStan = true;
                isStan = false;
                break;
            }
        }
        if(notStan){
            break;
        }
    }
    if(isStan){
        cout << "YES";
    }
    
    return 0;
}