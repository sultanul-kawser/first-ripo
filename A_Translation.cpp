#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string line, revLine;
    cin >> line >> revLine;
    int len = line.size();
    bool isSame = true;
    if (line.size() != revLine.size())
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < line.size(); i++)
        {
            if (line[i] != revLine[len - i - 1])
            {
                isSame = false;
                break;
            }
        }
        if (isSame)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}