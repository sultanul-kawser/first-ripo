#include<stdio.h>
int main()
{
    int X,a,b,c,d;
    scanf("%d",&X);

    a = X/1000;
    b = (X - a*1000)/100;
    c = ((X-a*1000)-b*100)/10;
    d = (((X-a*1000)-b*100)-c*10);
    printf("K%d%d\n",c,d);

    
}