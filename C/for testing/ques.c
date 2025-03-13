#include<stdio.h>
#include<string.h>
int main()
{
    char word1[100],word2[100];
    gets(word1);
    // strcpy(word2,word1);
    // int j = strlen(word1)-1;
    // int count = 0;
    // for(int i = 0; i<strlen(word1); i++)
    // {
    //     if(word1[i]==word2[j])
    //     {
    //         count --;
    //         break;
    //     }
    //     j--;
    // }
    // printf("%d",count);
    // // if(count == 0)
    // // {
    // //     printf("The %s is a palindrome",word1);
    // // }
    // // else 
    // // {
    // //     printf("The %s is not a palindrome");

    // // }
    printf("%d",strlen(word1));
    return 00;
}