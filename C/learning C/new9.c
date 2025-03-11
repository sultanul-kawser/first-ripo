#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number:");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("The factors of your number are:\n");
    }
    else
    {
        printf("Error!");
    }

    for (int i = 1; i <= a; i++)
    {

        if (a % i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}