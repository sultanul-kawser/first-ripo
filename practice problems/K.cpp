#include <iostream>
using namespace std;
int main()
{
    long long int a, b, c, temp;
    cin >> a >> b >> c;
    if (b > a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (c > a)
    {
        temp = a;
        a = c;

        c = temp;
    }
    if (c > b)
    {
        temp = b;
        b = c;

        c = temp;
    }

    cout << c << " "

         << a;
}