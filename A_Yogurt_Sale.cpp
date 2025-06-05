#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, price_of_one, price_of_two;
        cin >> n >> price_of_one >> price_of_two;
        long total_price_one = n * price_of_one;
        int no = floor((double)n / (double)2);
        long total_price_two = (abs((2 * no) - n) * price_of_one) + (no * price_of_two);
        if(total_price_one < total_price_two){
            cout << total_price_one << "\n";
        }else{
            cout << total_price_two << "\n";
        }
    }
    
    return 0;
}