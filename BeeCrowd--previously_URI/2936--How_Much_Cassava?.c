#include<stdio.h>
int main(void)
{
    int a,b,c,d,e, s;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    s = (300*a+1500*b+600*c+1000*d+150*e+225);
    printf("%d\n", s);
    return 0;
}
