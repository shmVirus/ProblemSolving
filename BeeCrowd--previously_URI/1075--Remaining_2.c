#include<stdio.h>
int main (void)
{
    int N, x;
    scanf("%d", &N);
    x = N;
    printf("2\n");
    for(N;N<10000;)
    {
        if (N%x==0)
        {
            printf("%d\n",N+2);
        }
        N++;
    }
    return 0;
}
