#include<stdio.h>
int main(void)
{
    int i,T,N;
    long long int F[61];
    F[0]=0;
    F[1]=1;
    for(i=2; i<61; i++)
    {
        F[i]=F[i-1]+F[i-2];
    }
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%d",&N);
        printf("Fib(%d) = %lld\n",N,F[N]);
    }
    return 0;
}
