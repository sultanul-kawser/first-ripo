#include <bits/stdc++.h>
using namespace std;
void answer(vector<int> numA, vector<int> numB, int n, int k){
   
    for(auto i = 0; i < k; i++){
        auto it_a = min_element(numA.begin(), numA.end());
        auto it_b = max_element(numB.begin(), numB.end());
        if(*it_a <= *it_b){
            int temp = *it_a;
            *it_a = *it_b;
            *it_b = temp;
        }
        
    }
    int sum (0);
    for(auto val : numA){
        sum += val;
    }
    cout << sum << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> numA;
        vector<int> numB;
        for(auto i = 0; i < n; i++){
            int a;
            cin >> a;
            numA.push_back(a);
        }
        for(auto i = 0; i < n; i++){
            int a;
            cin >> a;
            numB.push_back(a);
        }
        answer(numA, numB, n, k);
    }
    
    return 0;
}