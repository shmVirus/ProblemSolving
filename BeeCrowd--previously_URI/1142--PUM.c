#include<stdio.h>
int main(void)
{
    int a,b, x=1;
    scanf("%d", &b);
    for(a=1;a<=b;a++)
    {
        printf("%d %d %d PUM\n", x, x+1, x+2);
        x+=4;
    }
    return 0;
}
