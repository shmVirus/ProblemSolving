#include<stdio.h>
int main(void)
{
    int t,T, i;
    unsigned long long f, N;
    scanf("%d",&T);
    for(t=1; t<=T; t++)
    {
        f = 1;
        i = 1;
        scanf("%llu", &N);
        for(N; N>=i; N--)
        {
            f*=N;
        }
        printf("%llu\n",f);
    }
    return 0;
}
