#include <stdio.h>
int main()
{
    double a, b, c;
    printf("Enter three number:\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%.3lf is the biggest number .", a);
    }
    else if (b > a && b > c)
    {
        printf("%.3lf is the biggest number.", b);
    }
    else if (c > a && c > b)
    {
        printf("%.3lf is the biggest number.", c);
    }
    else
    {
        printf("You entered a wrong input.");
    }
}