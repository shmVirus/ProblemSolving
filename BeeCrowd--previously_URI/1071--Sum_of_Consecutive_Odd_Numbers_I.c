#include<stdio.h>
int main(void)
{
    int X,Y, a=0;
    scanf("%d %d", &X, &Y);
    if (X>Y)
    {
        X = X+Y;
        Y = X-Y;
        X = X-Y;
    }
    for(X++;X<Y;)
    {
        if (X%2!=0)
        {
            a = a+X;
        }
        X++;
    }
    printf("%d\n", a);
    return 0;
}
