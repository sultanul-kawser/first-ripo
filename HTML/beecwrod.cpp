#include <stdio.h>

int main()
{
     double A, B, C, f, m, l;
     scanf("%lf%lf%lf", &A, &B, &C);

     if (B >= A && B >= C)
     {
          f = B;
     }
     else if (C >= A && C >= B)
     {
          f = C;
     }
     else if (A >= B && A >= C)
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

     if (A <= f && A >= l)
     {
          m = A;
     }
     else if (B <= f && B >= l)
     {
          m = B;
     }
     else if (C <= f && C >= l)
     {
          m = C;
     }

     if (f >= (m + l))
     {
          printf("NAO FORMA TRIANGULO\n");
     }
     if ((f * f) == (m * m +  l* l))
     {
          printf("TRIANGULO RETANGULO\n");
     }
     if ((f * f) > (m * m + l * l))
     {
          printf("TRIANGULO OBTUSANGULO\n");
     }
     if ((f * f) < (m * m + l * l))
     {
          printf("TRIANGULO ACUTANGULO\n");
     }
     if (f == m && m == l && f == l)
     {
          printf("TRIANGULO EQUILATERO\n");
     }
     else if (f == m || m == l || f == l)
     {
          printf("TRIANGULO ISOSCELES\n");
     }
}