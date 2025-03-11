#include <stdio.h>
int main()
{
    double  r, pi = 3.141592653589793238462643383279502884197, area, circum;
    scanf("%lf", &r);
    area = pi * (r * r);
    circum = 2 * (pi * r);
    printf("%.6lf %.6lf", area, circum);
}