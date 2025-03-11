#include <stdio.h>

int main()
{
     double A, B, C, f, m, l;
     scanf("%lf%lf%lf", &A, &B, &C);

     if (B > A && B > C)
     {
          f = B;
     }
     else if (C > A && C > B)
     {
          f = C;
     }
     else if (A > B && A > C)
     {
          f = A;
     }

     if (A < B && A < C)
     {
          l = A;
     }
     else if (B < A && B < C)
     {
          l = B;
     }
     else if (C < A && C < B)
     {
          l = C;
     }

     if (A < f && A > l)
     {
          m = A;
     }
     else if (B < f && B > l)
     {
          m = B;
     }
     else if (C < f && C > l)
     {
          m = C;
     }

     if (A >= (B + C))
     {
          printf("NAO FORMA TRIANGULO\n");
     }
     if ((A * A) == (B * B + C * C))
     {
          printf("TRIANGULO RETANGULO\n");
     }
     if ((A * A) > (B * B + C * C))
     {
          printf("TRIANGULO OBTUSANGULO\n");
     }
     if ((A * A) < (B * B + C * C))
     {
          printf("TRIANGULO ACUTANGULO\n");
     }
     if (A == B && B == C && A == C)
     {
          printf("TRIANGULO EQUILATERO\n");
     }
     else if (A == B || B == C || A == C)
     {
          printf("TRIANGULO ISOSCELES\n");
     }
}