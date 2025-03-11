#include <iostream>
#include <ctime>
using namespace std;

int main()
{
   srand(time(0));

    int x;
    x = rand() % 6;
    cout << x;
    return 0;
}