#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the value:";
    cin >> n;
    m = n - (n /10);
    cout << "The final amount is " << m;
    return 0;
}
