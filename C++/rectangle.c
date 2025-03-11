#include <stdio.h>
int main()
{
  int x,a,b,c,abc,bca,cab,result;
  scanf("%d",&x);
  a = x/100; //output will be 1 for input 123
  b =(x - (a * 100))/10; //output will be 2 for input 123
  c = ((x -(a*100))- (b*10)); // output will be 3 for input 123;
  abc = x;
  bca = (100*b) + (10*c) + a;
  cab = (100*c) + (10*a) +b ;
  result = abc + bca + cab;
  printf("%d\n",result);
}