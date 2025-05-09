#include <bits/stdc++.h>
using namespace std;

int counter(string line, int n)
{
    vector<char> alphabet;
    char ch = 'a';
    alphabet.push_back(ch);
    for (int i = 1; i < 26; i++)
    {
        ch++;
        alphabet.push_back(ch);
    }
    int counter = 0;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (alphabet[i] == tolower(line[j]))
            {
                counter++;
                break;
            }
        }
        if (counter == 26)
        {
            break;
        }
    }
    return counter;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    string line;
    cin >> line;

    if (n < 26)
    {
        cout << "NO";
    }
    else if (counter(line, n) == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}