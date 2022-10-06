#include<stdio.h>
int main(void)
{
    int X,Y;
    scanf("%d %d", &X, &Y);
    if (X>Y)
    {
        X = X+Y;
        Y = X-Y;
        X = X-Y;
    }
    for(X++;X<Y;X++)
    {
        if(X%5==2 || X%5==3)
        {
            printf("%d\n",X);
        }
    }
    return 0;
}
