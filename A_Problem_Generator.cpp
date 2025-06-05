#include <bits/stdc++.h>
using namespace std;
void check_bank(){
    int bank, round;
    cin >> bank >> round;
    string line;
    cin >> line;
    int cntA(0), cntB(0), cntC(0), cntD(0), cntE(0), cntF(0), cntG(0);
    for(auto i = 0; i < bank; i++){
        if(line[i] == 'A'){
            cntA++;
        }else if(line[i] == 'B'){
            cntB++;
        }else if(line[i] == 'C'){
            cntC++;
        }else if(line[i] == 'D'){
            cntD++;
        }else if(line[i] == 'E'){
            cntE++;
        }else if(line[i] == 'F'){
            cntF++;
        }else if(line[i] == 'G'){
            cntG++;
        }
    }
    int sum = abs(cntA - round) + abs(cntB - round) + abs(cntC - round) + abs(cntD - round) + abs(cntE - round) + abs(cntF - round) + abs(cntG - round);
    cout << sum << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        check_bank();
    }
    
    return 0;
}