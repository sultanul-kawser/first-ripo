// (1) -> Even of Odd
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter your number :\n";
    long long num;
    cin >> num;
    if(num % 2 == 0){
        cout << num << " is an even number.";
    }else{
        cout << num << " is an odd number.";
    }
    
    return 0;
}
// End--