#include<stdio.h>
int main(void)
{
    int t,T, a,b,c;
    scanf("%d",&T);
    for(t=1; t<=T; t++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a<b && a<c)
        {
            if (b<c)
            {
                printf("Case %d: %d %d %d\n", t,a,b,c);
            }
            else
            {
                printf("Case %d: %d %d %d\n", t,a,c,b);
            }
        }
        else if (b<a && b<c)
        {
            if(a<c)
            {
                printf("Case %d: %d %d %d\n", t,b,a,c);
            }
            else
            {
                printf("Case %d: %d %d %d\n", t,b,c,a);
            }
        }
        else
        {
            if(a<b)
            {
                printf("Case %d: %d %d %d\n", t,c,a,b);
            }
            else
            {
                printf("Case %d: %d %d %d\n", t,c,b,a);
            }
        }
    }
    return 0;
}
