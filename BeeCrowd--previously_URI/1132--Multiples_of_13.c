#include<stdio.h>
int main(void)
{
    int X,Y, s=0;
    scanf("%d %d", &X, &Y);
    if (X>Y)
    {
        X = X+Y;
        Y = X-Y;
        X = X-Y;
    }
    for(X;X<=Y;X++)
    {
        if(X%13!=0)
        {
            s = s+X;
        }
    }
    printf("%d\n",s);
    return 0;
}
