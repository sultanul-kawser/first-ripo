#include <stdio.h>
int main()
{
    int a, b = 69;

    while (1)
    {
        printf("Guess the number:");
        scanf("%d", &a);
        if (a > b)
        {
            printf("Your guessed number is bigger than the actual number.\n");
        }
        else if (a < b)
        {
            printf("Your guessed number is smaller than the actual number.\n");
        }
        else
        {
            printf("Congratulation! You guessed the right number .");
            break;
        }
    }
}