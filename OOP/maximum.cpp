// (9) -> Largest of three numbers
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter your three numbers :\n";
    long long a, b, c;
    cin >> a >> b >> c;
    if(a > b && a > c){
        cout << a << " is the maximum number.";
    }else if(b > a && b > c){
        cout << b << " is the maximum number.";
    }else if(c > a && c > b){
        cout << c << " is the maximum number.";
    }
    
    return 0;
}
// End--