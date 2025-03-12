#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    //a>b true - a is bigger than b 
    //false - b is bigger than a f
    if(a>b)
    {
       
        printf("a is bigger than b ");
       
    }
    else if(a==0)
    {
     printf(" a is equal to 0");
    }
    else 
    {
        printf("b is bigger than a ");
    }

}