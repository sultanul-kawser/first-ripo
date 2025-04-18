#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nums[n];
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        
        cin >> nums[i];
        int num = i%10;
        bool status = true;
        if (i/10 == 0 || i%10 == i/10)
        {
            while (status)
            {
                if (num <= nums[i])
                {
                    count++;
                }
                else
                {
                    status = false;
                }
                num = (num * 10) + (i%10);
            }
            
        }
        
    }
    cout<<count<<" ";
}