#include<stdio.h>
int main(void)
{
    int X,Y,y, a=1;
    scanf("%d %d", &X, &Y);
    if (X>Y)
    {
        X = X+Y;
        Y = X-Y;
        X = X-Y;
    }
    for(y=1;y<=Y;y++)
    {

        printf("%d", a);
        if(a%X!=0)
        {
            printf(" ");
        }
        if (a%X==0 || a==Y)
        {
            printf("\n");
        }
        a++;
    }
    return 0;
}
