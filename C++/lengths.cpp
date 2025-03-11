#include <iostream>
using namespace std;
int main()
{
     int x[5] = {1, 2, 3, 4, 5};
     cout << sizeof(x) / sizeof(x[0]) << endl;

     int y[4] = {1, 2, 3, 4};
     for (int z = 0; z < sizeof(y) / sizeof(y[0]); z++)
     {
         cout << y[z] << endl;
    }

     int a[4] = {1, 2, 3, 4};
     for (int b : a)
     {
         cout << b << endl;
     }
    int x[3] = {3, 4, 2};
    cout << x[1];
    cout << x[0];
    cout << x[2];
    return 0;
}