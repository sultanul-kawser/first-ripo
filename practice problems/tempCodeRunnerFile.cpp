#include <iostream>
using namespace std;
int main()
{
    char s;
    long long int a, b;
    cin >> a >> s >> b;
    switch (s)
    {
    case '<':
        if (a < b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
        break;
    case '>':
        if (a > b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
        break;
    case '=':
        if (a = b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
        break;
    }
}
