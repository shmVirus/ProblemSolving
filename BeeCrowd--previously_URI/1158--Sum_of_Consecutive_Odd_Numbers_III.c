#include<stdio.h>
int main(void)
{
    int a,N, X,y,Y, s;
    scanf("%d", &N);
    for(a=1; a<=N; a++)
    {
        scanf("%d %d", &X, &Y);
        s = 0;
        for(y=1; y<=2*Y; y++)
        {
            if (X%2!=0)
            {
                s = s+X;
            }
            X++;
        }
        printf("%d\n",s);
    }
    return 0;
}
