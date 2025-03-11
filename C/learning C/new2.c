#include <stdio.h>
int main()
{
    double num, sum;
    while (1)
    {
        printf("Enter a number :");
        scanf("%lf", &num);
        if (num < 0)
        {
            printf("You entered a negetive number.\n");
            break;
        }
        sum = sum + num;
    }
    printf("Your result is %.2lf.\n", sum);
    return 0;
}