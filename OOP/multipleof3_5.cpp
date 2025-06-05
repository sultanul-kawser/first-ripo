// (6) -> Multiple of 3 and 5
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter your number:\n";

    long long a;
    cin >> a;
    if(a % 3 == 0 && a % 5 == 0){
        cout << a << " is a multiple of 3 and 5.";
    }else{
        cout << a << " is not a multiple of 3 and 5.";
    }
    
    return 0;
}
// End--