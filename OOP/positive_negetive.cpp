// (5) -> Positive Negetive or Zero
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter your number:\n";
    
    long long num;
    cin >> num;
    if(num > 0){
        cout << num << " is a positive number.";
    }else if(num < 0){
        cout << num << " is a negetive number.";
    }else{
        cout << "Your number is zero.";
    }
    
    return 0;
}
// End--