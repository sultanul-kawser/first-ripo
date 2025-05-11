#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string position;
    cin >> position;
    int counter = 1;
    bool notDanger = true;
    for (int i = 0; i < position.size(); i++)
    {
        if (position[i] == position[i + 1])
        {
            counter++;
            if (counter >= 7)
            {
                cout << "YES";
                notDanger = false;
                break;
            }
        }
        else if (position[i] != position[i + 1])
        {
            counter = 1;
        }
    }
    
    if (notDanger)
    {
        cout << "NO";
    }
}