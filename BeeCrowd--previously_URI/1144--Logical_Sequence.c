#include<stdio.h>
int main(void)
{
    int a,b, x=1;
    scanf("%d", &b);
    for(a=1;a<=b;a++)
    {
        printf("%d %d %d\n", x, x*x, x*x*x);
        printf("%d %d %d\n", x, x*x+1, x*x*x+1);
        x++;
    }
    return 0;
}
