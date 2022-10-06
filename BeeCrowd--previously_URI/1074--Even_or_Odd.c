#include<stdio.h>
int main (void)
{
    int N, X, a=1;
    scanf("%d", &X);
    for(a;a<=X;a++)
    {
        scanf("%d", &N);
        if(N>0)
        {
            if (N%2==0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
        else if (N<0)
        {
            if (N%2==0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
        else
        {
            printf("NULL\n");
        }
    }
    return 0;
}
