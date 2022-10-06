#include<stdio.h>
int main()
{
    int X, x=0, n=0, Z;
    scanf("%d", &X);
    do
    {
        scanf("%d", &Z);
    }
    while(X>=Z);
    while(x<Z)
    {
        x+=X;
        X++;
        n++;
    }
    printf("%d\n",n);
    return 0;
}
