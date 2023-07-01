#include<stdio.h>
int main(void)
{
    int i,n, a,d, x;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &d);
        x = 0;
        for(a=1; a<d; a++)
        {
            if(d%a==0)
            {
                x+=a;
            }
        }
        if (x==d)
        {
            printf("%d eh perfeito\n",d);
        }
        else
        {
            printf("%d nao eh perfeito\n",d);
        }
    }
    return 0;
}
