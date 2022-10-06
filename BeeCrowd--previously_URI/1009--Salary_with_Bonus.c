#include<stdio.h>
int main (void)
{
    char A;
    float B,C,D;
    scanf("%s", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    D=B+(C*15/100);
    printf("TOTAL = R$ %.2f\n", D);
    return 0;
}
