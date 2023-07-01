#include<stdio.h>
int main(void)
{
    int a,b,c,d,e, x, n=0;
    scanf("%d", &x);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a==x)
    {
        n++;
    }
    if (b==x)
    {
        n++;
    }
    if (c==x)
    {
        n++;
    }
    if (d==x)
    {
        n++;
    }
    if (e==x)
    {
        n++;
    }
    printf("%d\n",n);
    return 0;
}
