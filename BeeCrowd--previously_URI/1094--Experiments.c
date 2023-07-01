#include<stdio.h>
int main(void)
{
    float M,N, a, t=0, c=0, r=0, s=0;
    char b;
    scanf("%f", &N);
    for(M=1;M<=N;M++)
    {
        scanf("%f %c", &a, &b);
        t = t+a;
        if(b == 'C')
        {
            c = c+a;
        }
        if(b == 'R')
        {
            r = r+a;
        }
        if(b == 'S')
        {
            s = s+a;
        }
    }
    printf("Total: %.0f cobaias\n",t);
    printf("Total de coelhos: %.0f\n",c);
    printf("Total de ratos: %.0f\n",r);
    printf("Total de sapos: %.0f\n",s);
    printf("Percentual de coelhos: %.2f %%\n",c/t*100);
    printf("Percentual de ratos: %.2f %%\n",r/t*100);
    printf("Percentual de sapos: %.2f %%\n",s/t*100);
}
