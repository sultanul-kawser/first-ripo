#include <iostream>
using namespace std;

int main()
{
    int num[] = {2, 7, 11, 15};
    int target = 9;
    int sum;
    for (int nums : num)
    {
        sum += nums;
        if (sum == target)
        {
            cout << sum;
        }
    }

    return 0;
}