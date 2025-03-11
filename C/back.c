#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   double N;
   int hun=0, fif=0, twen=0, ten=0, five=0, two=0;
   scanf("%lf",&N);

   hun=N/100;
   double remain= N-(hun*100);
   N=remain;

   fif=N/50;
   remain=N-(fif*50);
   N=remain;

   twen=N/20;
   remain= N-(twen*20);
   N=remain;

   ten=N/10;
   remain= N-(ten*10);
   N=remain;

   five=N/5;
   remain= N-(five*5);
   N=remain;

   two=N/2;
   remain= N-(two*2);
   N=remain;

   printf("NOTAS:\n");
   printf("%d nota(s) de R$ 100.00\n",hun);
   printf("%d nota(s) de R$ 50.00\n",fif);
   printf("%d nota(s) de R$ 20.00\n",twen);
   printf("%d nota(s) de R$ 10.00\n",ten);
   printf("%d nota(s) de R$ 5.00\n",five);
   printf("%d nota(s) de R$ 2.00\n",two);

   int one=0;
   int qfif=0, qtwef=0, qten=0, qfive=0, qone=0; 

   one=N/1;
   remain=N-(one*1);
   N=remain;

   qfif=N/0.5;
   remain= N-(qfif*0.5);
   N=remain;

   qtwef=N/0.25;
   remain= N-(qtwef*0.25);
   N=remain;

   qten=N/0.10;
   remain= N-(qten*0.10);
   N=remain;

   qfive=N/0.05;
   remain= N-(qfive*0.05);
   N=remain;

   qone=N/0.01;
   remain= N-(qone*0.01);
   N=remain;

   printf("MOEDAS:\n");
   printf("%d moeda(s) de R$ 1.00\n",one);
   printf("%d moeda(s) de R$ 0.50\n",qfif);
   printf("%d moeda(s) de R$ 0.25\n",qtwef);
   printf("%d moeda(s) de R$ 0.10\n",qten);
   printf("%d moeda(s) de R$ 0.05\n",qfive);
   printf("%d moeda(s) de R$ 0.01\n",qone);

}