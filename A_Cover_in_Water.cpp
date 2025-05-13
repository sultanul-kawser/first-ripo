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
        string cells;
        cin >> cells;
        int cntDot = 0;
        int cntTotaldot = 0;
        int cntHas = 0;
        for (int i = 0; i < n; i++)
        {
            if (cells[i] == '.')
            {
                cntDot++;
                cntTotaldot++;
            }
            else if (cells[i] == '#')
            {
                cntDot = 0;
                cntHas++;
            }
            if(cntDot == 3){
                break;
            }
        }
        if (cntDot == 3)
        {
            cout << 2 << '\n';
        }else if (cntHas == n)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << cntTotaldot << '\n';
        }
        
    }

    return 0;
}