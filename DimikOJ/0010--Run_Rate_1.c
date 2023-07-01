#include<stdio.h>
int main(void)
{
    int t,T, a,b,c;
    double x,y;
    scanf("%d",&T);
    for(t=1; t<=T; t++)
    {
        scanf("%d %d %d", &a, &b, &c);
        x = ((double)b/(300-c))*6;
        y = (((a+1)-(double)b)/c)*6;
        if (b>a)
        {
            y = 0;
        }
        printf("%.2lf %.2f\n", x,y);
    }
    return 0;
}
