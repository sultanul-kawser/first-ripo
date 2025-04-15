#include <iostream>
using namespace std;
int main()
{
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    int nums[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> nums[i];
    }
    int i = p, j = r;
    for (int k = 1; k <= n; k++)
    {
        if (i <= q && j <= s)
        {
            if (k == i)
            {
                swap(nums[k], nums[j]);
                i++;
                j++;
            }
        }
        cout << nums[k] << " ";
    }
}