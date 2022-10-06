#include<stdio.h>
int main(void)
{
    int a,n, x=0,y=1,s;
    scanf("%d", &n);
    for(a=1; a<=n; a++)
    {
        printf("%d",x);
        if(a!=n)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
        s = x+y;
        x = y;
        y = s;
    }
    return 0;
}
