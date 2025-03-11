#include<stdio.h>
int main()
{
     int a,b,c;

     scanf("%d%d%d",&a,&b,&c);

     if(b>a)
     {
        int temp=a;
        a=b;
        b=temp;
     }
     if(c>a)
    {
        int temp=a;
        a=c;
        c=temp;
    }
    if(c>b)
    {
        int temp=b;
        b=c;
        c=temp;
    }

    printf("%d %d %d",a,b,c);

     
}