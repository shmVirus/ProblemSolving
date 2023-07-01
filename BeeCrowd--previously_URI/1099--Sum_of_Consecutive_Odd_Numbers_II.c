#include<stdio.h>
int main(void)
{
    int M,N, X,Y, sum;
    scanf("%d", &N);
    for(M=1;M<=N;M++)
    {
        scanf("%d %d", &X, &Y);
        if(Y<X)
        {
            X = X+Y;
            Y = X-Y;
            X = X-Y;
        }
        sum = 0;
        for(X+=1;X<Y;X++)
        {
            if(X%2!=0)
            {
                sum = sum + X;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
