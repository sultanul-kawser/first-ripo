// (3) -> Simple Calculator
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter your operator (+, -, *, /) :\n";
    char op;
    cin >> op;
    cout << "Enter your two numbers :\n";
    long long a, b;
    cin >> a >> b;
    if(op == '+'){
        cout << "summation of " << a << " and " << b << " is " << a + b;
    }else if(op == '-'){
        cout << "subtraction of " << a << " and " << b << " is " << a - b;
    }else if(op == '*'){
        cout << "multiplication of " << a << " and " << b << " is " << a * b;
    }else if(op == '/'){
        cout << "division of " << a << " and " << b << " is " << fixed << setprecision(4) << (double)a / (double)b;
    }

    return 0;
}
// End--