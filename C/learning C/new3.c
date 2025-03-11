#include <stdio.h>
int main()
{
    double a;
    double num;
    for (a = 1; a <= 10; a++)
    {
        printf("Enter a number:");
        scanf("%lf", &num);
        if (num < 0)
        {
            printf("You entered a negetive number.\n");
            continue;
        }
        printf("You entered %.2lf.\n", num);
    }
}