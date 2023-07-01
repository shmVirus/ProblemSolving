#include<stdio.h>
int main(void)
{
    int a, n;
    do
    {
        scanf("%d", &n);
        if (n!=0)
        {
            for(a=1;a<=n;a++)
            {
                printf("%d",a);
                if(a%n!=0)
                {
                    printf(" ");
                }
                if (a%n==0)
                {
                    printf("\n");
                }
            }
        }
        else
        {
            return 0;
        }

    }
    while(n!=0);
    return 0;
}
