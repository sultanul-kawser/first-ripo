#include <iostream>
using namespace std;
int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (c >= a && c <= b)
    {
        if (b > c && b < d)
        {
            cout << c << " " << b;
        }
    }
    else if (a >= c && a <= d)
    {
        if (d > a && d < b)
        {
            cout << a << " " << d;
        }
    }
    else if (a == c && b == d)
    {
        if (a == c)
        {
            cout << a << " " << c;
        }
        else if (b == d)
        {
            cout << b << " " << d;
        }
    }
    else
    {
        cout << "-1";
    }
}