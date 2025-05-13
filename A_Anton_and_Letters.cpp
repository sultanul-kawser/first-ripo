#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string line;
    getline(cin, line);
    vector<char> newLine;

    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] >= 97 && line[i] <= 122)
        {
            newLine.push_back(line[i]);
        }
    }
    int len = newLine.size();

    for (int i = 0; i < newLine.size(); i++)
    {
        for (int j = i + 1; j < newLine.size(); j++)
        {
            // if(i != j){
            if (newLine[i] == newLine[j])
            {
                len--;
                break;
            }
            // }
        }
    }
    cout << len;

    return 0;
}