#include<stdio.h>
int main(void)
{
    int i,n, a,d, x;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &d);
        x = 0;
        for(a=1; a<=d; a++)
        {
            if(d%a==0)
            {
                x++;
            }
        }
        if (x==2)
        {
            printf("%d eh primo\n",d);
        }
        else
        {
            printf("%d nao eh primo\n",d);
        }
    }
    return 0;
}
