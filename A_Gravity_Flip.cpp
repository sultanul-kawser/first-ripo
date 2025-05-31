#include <bits/stdc++.h>
using namespace std;
void sorting(int n){
    int num[n];
    for(auto i = 0; i < n; i++){
        cin >> num[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(num[i] < num[j]){
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for(auto val : num){
        cout << val << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    sorting(n);
    
    return 0;
}