#include <iostream>
using namespace std;
int main()
{
    long int n;
    bool lastNum = true;
    cin >> n;
    long int nums[n];
    for (long int i = 0; i < n; i++)
    {
        cin >> nums[i];
        if (i != 0)
        {
            if (nums[i]<=nums[i-1])
            {
                cout << nums[i-1];
                lastNum = false;
                break;
            }
        }
    }
    if(lastNum){
        cout<<nums[n-1];
    }
}