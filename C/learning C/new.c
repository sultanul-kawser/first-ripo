#include <stdio.h>
int main()
{
    int a;
    double num;
    for (a = 1; a <= 10; ++a)
    {
        printf("Enter a number :");
        scanf("%lf", &num);
        if (num < 0)
        {
            printf("You entered a negetive number.");
            break;
        }
        printf("You entered %.2lf.\n", num);
    }
}