#include<stdio.h>
int main(void)
{
    int i,n, t,T;
    scanf("%d", &T);
    for(t=1; t<=T; t++)
    {
        scanf("%d", &n);
        printf("Case %d: ",t);
        for(i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                printf("%d",i);
                if(i!=n)
                {
                    printf(" ");
                }
                else
                {
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
