#include <bits/stdc++.h>
using namespace std;
int main()
{
    string layoutOne;
    string layoutTwo;
    string inputFromLayOne;
    cin >> layoutOne >> layoutTwo >> inputFromLayOne;
    for (int i = 0; i < inputFromLayOne.size(); i++)
    {
        if (isdigit(inputFromLayOne[i]))
        {
            cout << inputFromLayOne[i];
        }
        else
        {
            for (int j = 0; j < layoutOne.size(); j++)
            {
                if (tolower(inputFromLayOne[i]) == layoutOne[j])
                {
                    if (isupper(inputFromLayOne[i]))
                    {
                        cout << (char)toupper(layoutTwo[j]);
                    }
                    else
                    {
                        cout << layoutTwo[j];
                    }
                    break;
                }
            }
        }
    }
}