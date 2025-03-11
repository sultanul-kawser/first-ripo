#include <stdio.h>
#include <math.h>

int main()
{
    double a,b=100;
    scanf("%lf",&a);
    printf("%.2lf",fmod(a,b));
    double c=11.70;
    printf("%lf",round(c));

}