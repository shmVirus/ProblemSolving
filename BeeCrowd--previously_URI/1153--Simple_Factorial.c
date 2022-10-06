#include<stdio.h>
int main(void)
{
    int i=1,f=1,N;
    scanf("%d", &N);
    for(N; N>=i; N--)
    {
        f*=N;
    }
    printf("%d\n",f);
    return 0;
}
