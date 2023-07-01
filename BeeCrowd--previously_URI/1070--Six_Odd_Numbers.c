#include<stdio.h>
int main(void)
{
    int a=1, X;
    scanf("%d",&X);
    for (a;a<=6;)
    {
        if (X%2!=0)
        {
            printf("%d\n",X);
            a++;
        }
        X++;
    }
    return 0;
}
