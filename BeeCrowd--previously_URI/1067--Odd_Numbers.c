#include<stdio.h>
int main(void)
{
    int a=1, X;
    scanf("%d",&X);
    for (a;a<=X;a++)
    {
        if (a%2!=0)
            printf("%d\n",a);
    }
    return 0;
}
