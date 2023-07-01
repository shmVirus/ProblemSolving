#include<stdio.h>
#include<math.h>
int main(void)
{
    int t,T, x;
    double a, b;
    scanf("%d",&T);
    for(t=1; t<=T; t++)
    {
        scanf("%lf", &a);
        b = sqrt(a);
        x = b;
        if (b == x)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
