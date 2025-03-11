#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int y = 1; y <= 10; y++)
    {
        int result = x * y;
        cout << x << '*' << y << '=' << result << endl;
    }
    return 0;
}