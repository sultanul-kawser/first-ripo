#include <iostream>
using namespace std;
int main()
{
    int x[3] = {32, 34, 23};
    cout << x[2] << endl;
    x[1] = 45;
    cout << x[1] << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << x[i] << endl;
    }

    int z[4] = {23, 45, 65, 76};

    for (int j : z)
    {
        cout << j << endl;
    }

    return 0;
}