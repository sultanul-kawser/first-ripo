#include <stdio.h>
int main()
{
    double a, b;
    printf("Enter two numbers:\n");
    scanf("%lf%lf", &a, &b);
    if (a > b)
    {
        printf("%.2lf is greater than %.2lf.", a, b);
    }
    else if (b > a)
    {
        printf("%.2lf is greater than %.2lf.", b, a);
    }
    else
    {
        printf("%.2lf is equal to %.2lf.",a,b);
    }
}