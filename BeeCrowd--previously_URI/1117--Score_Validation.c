#include<stdio.h>
int main(void)
{
    float a,b, m;
    do
    {
        scanf("%f", &a);
        if (a<0 || a>10)
        {
            printf("nota invalida\n");
        }
    }
    while(a<0 || a>10);
    do
    {
        scanf("%f", &b);
        if (b<0 || b>10)
        {
            printf("nota invalida\n");
        }
    }
    while(b<0 || b>10);
    m = (a+b)/2;
    printf("media = %.2f\n",m);
    return 0;
}
