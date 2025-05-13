#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k, l, d;
    int count = 0;
    cin >> n >> m >> k >> l >> d;
    if (n == 1)
    {
        cout << d;
    }
    else
    {
        for (int i = 1; i <= d; i++)
        {
            if(i%n == 0 || i%m == 0 || i%k == 0 || i%l == 0 ){
                count ++;
            }
        }
        cout<<count;
    }
}