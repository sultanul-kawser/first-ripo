#include <iostream>
using namespace std;

long int timeOfdoubleClicked(int mouseClicked, long int time[], long int D)
{
    for (int i = 0; i < mouseClicked; i++)
    {
        for (int j = mouseClicked - 1; j >= 0; j--)
        {
            if (j != i && j > i)
            {
                if (time[j] - time[i] <= D)
                {
                    return time[j];
                }
            }
        }
    }
    return -1;
}
int main()
{

    int mouseClicked;
    long int D;
    cin >> mouseClicked >> D;
    long int time[mouseClicked];
    for (int i = 0; i < mouseClicked; i++)
    {
        cin >> time[i];
    }

    cout << timeOfdoubleClicked(mouseClicked, time, D);

    return 0;
}