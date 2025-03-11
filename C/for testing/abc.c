#include<stdio.h>
int main()
{
    int x,y,z,a,b,c,A,bca,cab;
    scanf("%d",&a);
    x=a%10;//a
    y=(a/10)%10;//b
    z=(a/100);//c
    bca=(y*100)+(z*10)+x;
    cab=(z*100)+(x*10)+y;


    A=(a+bca+cab);
    printf("%d\n",A);




    return 0;
}