#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int first, second, third, fourth;
    cin >> first >> second >> third >> fourth;
    string line;
    cin >> line;
    long sum = 0;
    for(int i = 0; i < line.size(); i++){
        if(line[i] == '1'){
            sum += first;
        }else if(line[i] == '2'){
            sum += second;
        }else if(line[i] == '3'){
            sum += third;
        }else if(line[i] == '4'){
            sum += fourth;
        }
    }

    cout << sum;
    
    return 0;
}