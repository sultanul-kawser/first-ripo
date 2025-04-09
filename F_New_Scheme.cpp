#include <iostream>
using namespace std;

bool checkConditions(int nums[])
{
    for (int i = 0; i < 8; i++)
    {
        if (i != 7)
        {
            if (nums[i] > nums[i + 1])
            {
                return false;
            }
        }
        else if (nums[i] < 100 || nums[i] > 675)
        {
            return false;
        }
        else if (nums[i] % 25 != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int nums[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> nums[i];
    }

    if (checkConditions(nums))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}