#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int price, k;
    cin >> price >> k;
    int counter = 1;
    while(1){
        if(price * counter % 10 == k || price * counter % 10 == 0){
            break;
        }
        counter ++;
    }
    cout<<counter;
    return 0;
}