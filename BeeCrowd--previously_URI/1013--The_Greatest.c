#include<stdio.h>
#include<math.h>
int main (void)
{
    int A,B,C,D;
    scanf("%d %d %d", &A, &B, &C);
    D=((A+B+abs(A-B))/2+C+abs((A+B+abs(A-B))/2-C))/2;
    printf("%d eh o maior\n",D);
    return 0;
}
