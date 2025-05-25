#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sumEven = 0;
        int sumOdd = 0;
        if (n == 2)
        {

            int a, b;
            cin >> a >> b;
            if (a % 2 == 0 && b % 2 == 0)
            {
                cout << "YES\n";
            }
            else if (a % 2 == 1 && b % 2 == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                int a;
                cin >> a;
                if (a % 2 == 0)
                {
                    sumEven += a;
                }
                else
                {
                    sumOdd += a;
                }
            }
            if (sumOdd % 2 == 0 && sumOdd % 2 == 0)
            {
                cout << "YES\n";
            }
            else if (sumOdd % 2 == 1 && sumEven % 2 == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}