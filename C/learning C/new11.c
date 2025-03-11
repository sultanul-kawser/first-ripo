#include <stdio.h>
int addnumbers(int n1, int n2)
{
    int sum, sum2;
    sum = n1 - n2;
    sum2 = n1 + n2;
    return sum2;
}
int main()
{
    int result, a = 2, b = 3;
    result = addnumbers(b, a);
    printf("sum=%d", result);
    return 0;
}