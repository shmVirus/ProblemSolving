#include<stdio.h>
int main(void)
{
    int t,T, n;
    scanf("%d", &T);
    for (t=1; t<=T; t++)
    {
        scanf("%d", &n);
        if (n%2==0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}
