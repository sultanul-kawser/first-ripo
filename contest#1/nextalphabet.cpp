#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a == 'z')
    {
        cout << "a";
    }
    else
    {
        int b = a + 1;
        a = b;
        cout << a;
    }
}