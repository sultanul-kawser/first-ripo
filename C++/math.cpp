#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y;
    z = max(x, y);
    double sum = z / 10;
    cout << sum;
    return 0;
}