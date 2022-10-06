#include<stdio.h>
int main(void)
{
    int a,x, n=0;
    for(n=1; n<=4; n++)
    {
        scanf("%d", &a);
        if (a==1)
        {
            x=n;
        }
    }
    printf("%d\n",x);
    return 0;
}

/*
another solution:
#include<stdio.h>
int main(void)
{
    int a,b,c,d, n=0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a==1)
    {
        printf("1\n");
    }
    else if (b==1)
    {
        printf("2\n");
    }
    else if (c==1)
    {
        printf("3\n");
    }
    else if (d==1)
    {
        printf("4\n");
    }
    return 0;
}

*/
