#include <iostream>
using namespace std;
int main()
{
    int mg, ma, rg, ra, mp, rp;
    cin >> mg >> ma >> rg >> ra;
    mp = (mg * 2) + (ma);
    rp = (rg * 2) + ra;
    if (mp < rp)
    {
        cout << "Ronaldo\n";
    }
    else if (mp > rp)
    {
        cout << "Messi\n";
    }
    else if (mp == rp)
    {
        cout << "Equal\n";
    }
}