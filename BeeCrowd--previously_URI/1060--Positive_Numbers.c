#include<stdio.h>
int main(void)
{
    float a;
    int p=1, x=0;
    for (p;p<=6;p++)
    {
        scanf("%f", &a);
        if (a>0)
        {
            x++;
        }
    }
    printf("%d valores positivos\n", x);
    return 0;
}

/*

another solution:
#include<stdio.h>
int main(void)
{
    float a,b,c,d,e,f;

    int x;
    x=0;

    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    if (a > 0)
    {
        x++;
    }
    if (b > 0)
    {
        x++;
    }
    if (c > 0)
    {
        x++;
    }
    if (d > 0)
    {
        x++;
    }
    if (e > 0)
    {
        x++;
    }
    if (f > 0)
    {
        x++;
    }
    printf("%d valores positivos\n", x);
    return 0;
}

*/
