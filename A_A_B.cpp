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
        string line;
        cin >> line;
        int num;
        int sum(0);
        for (auto i = 0; i < line.size(); i++)
        {
            if (line[i] >= 48 && line[i] <= 57)
            {
                int num = line[i] - '0';
                sum += num;
            }
        }
        cout << sum << "\n";
    }

    return 0;
}