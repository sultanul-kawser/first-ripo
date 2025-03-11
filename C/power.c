#include<stdio.h>
int main()
{
    int A,B,powera,powerb,total;
    scanf("%d%d",&A,&B);
    powera = A;
    for(int i = 2 ; i<=B; i++ )
    {
        powera = powera*A;
    }
    powerb = B;
    for(int i = 2 ; i<=A; i++ )
    {
        powerb = powerb*B;
    }
    total = powera+powerb;

    printf("%d\n",total);
}