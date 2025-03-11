#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int   A, B, floor, ceil,rnd;
    
    scanf("%lld%lld",&A,&B);
    floor = A / B;
    if (A % B == 0)
    {
        ceil = floor;
    }
    else
    {
        ceil = (A / B) + 1;
    }

    rnd = (double)A / B;
    printf("floor %lld / %lld = %lld\n",A,B,floor);
    printf("ceil %lld / %lld = %lld\n",A,B,ceil);
    printf("round %lld / %lld = %lld\n",A,B,rnd);

    // cout << "floor " << A << " / " << B << " = " << floor << endl;
    // cout << "ceil " << A << " / " << B << " = " << ceil << endl;
    // cout << "round " << A << " / " << B << " = " << round(rnd) << endl;
}