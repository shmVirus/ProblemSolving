#include<stdio.h>
int main(void)
{
    int t,T,n, x,y;
    scanf("%d",&T);
    for(t=1; t<=T; t++)
    {
        scanf("%d", &n);
        x = n%10;
        while(n!=0)
        {
            y = n%10;
            n/=10;
        }
        printf("Sum = %d\n", x+y);
    }
    return 0;
}
