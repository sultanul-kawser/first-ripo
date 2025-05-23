#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> for1;
    vector<int> for2;
    vector<int> for3;
    int cnt1(0), cnt2(0), cnt3(0);
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a == 1){
            for1.push_back(i);
            cnt1++;
        }else if(a == 2){
            for2.push_back(i);
            cnt2++;
        }else if(a == 3){
            for3.push_back(i);
            cnt3++;
        }
    }
    int w = min(min(cnt1, cnt2), cnt3);
    if(w != 0){
        cout << w << "\n";
        for(auto i = 0; i < w; i++){
            cout << for1[i] + 1 << " " << for2[i] + 1 << " " << for3[i] +1 << " " << "\n";
        }
        
        
    }else{
        cout << w;
    }
    
    return 0;
}