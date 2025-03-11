#include<stdio.h>
int main()
{
     long long int A,B,attacktime=0,total;
     scanf("%lld%lld",&A,&B);

    
    attacktime = A/B;
    if((A%B)== 0 )
    {
      printf("%lld",attacktime);
    }
    else 
    {
      attacktime = attacktime +1;
      printf("%lld",attacktime);
    }
   

}