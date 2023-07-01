#include<stdio.h>
int main(void)
{
    int A,N,n,s=0;
    scanf("%d", &A);
    do
    {
        scanf("%d", &N);
    }
    while(N<=0);
    for(n=1;n<=N;n++)
    {
        s = s+A;
        A++;
    }
    printf("%d\n", s);
    return 0;
}
