#include<stdio.h>
int main(void)
{
    int a,b, n, t,T;
    scanf("%d", &T);
    for(t=1; t<=T; t++)
    {
        scanf("%d", &n);
        for(a=1; a<=n; a++)
        {
            for(b=1; b<=n; b++)
            {
                    printf("*");
            }
            printf("\n");
        }
        if (t!=T)
        {
            printf("\n");
        }
        else
        {
            break;
        }
    }
    return 0;
}
