#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    while(n--){
        string a, b;
        cin >> a >> b;
        char ch = a[0];
        a[0] = b[0];
        b[0] = ch;
        cout << a << " " << b << "\n";
    }
    
    return 0;
}