#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int sum = 0;
    int big = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum = sum - a[i] + b[i];
        big = max(big, sum);
    }
    cout << big;
}