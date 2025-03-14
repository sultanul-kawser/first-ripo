#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int a, b, c, d;
    long double first, second;
    cin >> a >> b >> c >> d;

    first = (long double)b * (log(a));
    second = (long double)d * (log(c));

    if (first > second)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}