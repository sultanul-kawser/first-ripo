#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char direction;
    cin >> direction;
    string line;
    cin >> line;
    int len = line.size();
    vector<string> keyboard ;
    string line2 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    keyboard.push_back(line2);
    //cout << direction << "\n" << line;
    if(direction == 'R'){
        for(auto i = 0; i < len; i++){
            for(auto j = 0; j < line2.size(); j++){
                if(line[i] == line2[j]){
                    cout << line2[j-1];
                }
            }
        }
    }else if(direction == 'L'){
         for(auto i = 0; i < len; i++){
            for(auto j = 0; j < line2.size(); j++){
                if(line[i] == line2[j]){
                    cout << line2[j+1];
                }
            }
        }
    }

    
    return 0;
}