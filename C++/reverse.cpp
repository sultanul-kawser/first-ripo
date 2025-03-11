#include <iostream>
using namespace std;
int main()
{
    int numbers;
    cin >> numbers;
    int revnum = 0;
    while (numbers)
    {
        revnum = revnum * 10 + numbers % 10;
        numbers /= 10;
    }
    cout << revnum;
    return 0;
}