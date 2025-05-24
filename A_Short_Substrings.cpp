#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    while(n--){
        string line;
        cin >> line;
        for(int i = 0; i < line.size(); i++){
            if(i == 0 || i == line.size() - 1){
                cout << line[i];
                if(i == line.size() - 1){
                    cout << "\n";
                }
            }else if(line[i] == line[i+1]){
                cout << line[i];
                i++;
            }
        }
    }
    
    return 0;
}