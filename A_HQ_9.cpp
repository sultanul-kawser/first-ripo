#include <bits/stdc++.h>
using namespace std;
void checkLine(string line, int len){
    for(auto i = 0; i < len; i++){
        if(line[i] == 'H' || line[i] == 'Q' || line[i] == '9'){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string line;
    cin >> line;
    int len = line.size();
    checkLine(line, len);

    
    return 0;
}