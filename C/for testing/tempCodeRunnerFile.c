#include <stdio.h>
int main()
{
    int a,b,d,r;
    float f;
    scanf("%d%d",&a,&b);
    d=a/b;
    r=a%b;
    f=(float)(a/b);
    printf("%d %d %.5f",d,r,f);
}