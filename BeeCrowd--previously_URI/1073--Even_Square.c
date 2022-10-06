#include<stdio.h>
int main (void)
{
    int N, a=1;
    scanf("%d", &N);
    for(a;a<=N;)
    {
        if (a%2==0)
        {
            printf("%d^2 = %d\n",a , a*a);
        }
        a++;
    }
    return 0;
}
