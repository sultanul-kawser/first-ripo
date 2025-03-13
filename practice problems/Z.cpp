#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int a, b, c, d, first, second;
    cin >> a >> b >> c >> d;
    first = pow(a, b);
    second = pow(c, d);

    if (first > second)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}