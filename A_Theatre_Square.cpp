#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int m, n, a;
    cin >> m >> n >> a;
    cout << (long long)(ceil((long double)m / (long double)a)) * (long long)(ceil((long double)n / (long double)a));
}