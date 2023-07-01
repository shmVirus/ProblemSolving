#include<stdio.h>
int main(void)
{
    int X;
    double a,b, m;
x:
    do
    {
        scanf("%lf", &a);
        if (a<0 || a>10)
        {
            printf("nota invalida\n");
        }
    }
    while(a<0 || a>10);
    do
    {
        scanf("%lf", &b);
        if (b<0 || b>10)
        {
            printf("nota invalida\n");
        }
    }
    while(b<0 || b>10);
    m = (a+b)/2;
    printf("media = %.2lf\n",m);
y:
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &X);
    if(X==1)
    {
        goto x;
    }
    else if(X==2)
    {
        return 0;
    }
    else
    {
        goto y;
    }
    return 0;
}
