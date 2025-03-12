#include <iostream>
using namespace std;
int main()
{
    long long int a, b, c, temp, x, y, z;
    cin >> a >> b >> c;
    x = a;
    y = b;
    z = c;

    if (b != a)
    {
        if (b >= a)
        {
            temp = a;
            a = b;
            b = temp;
        }
    }
    if (c != a)
    {
        if (c >= a)
        {
            temp = a;
            a = c;
            c = temp;
        }
    }

    if (c != b)
    {
        if (c >= b)
        {
            temp = b;
            b = c;
            c = temp;
        }
    }
    cout << c << endl
         << b << endl
         << a << endl
         << endl;
    cout << x << endl
         << y << endl
         << z << endl;
}
