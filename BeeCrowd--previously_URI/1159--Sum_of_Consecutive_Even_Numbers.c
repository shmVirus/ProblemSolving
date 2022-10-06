#include<stdio.h>
int main(void)
{
    int a,X,s;
    do
    {
        scanf("%d", &X);
        if (X==0)
        {
            break;
        }
        s = 0;
        for(a=1; a<=10; a++)
        {
            if (X%2==0)
            {
                s = s+X;
            }
            X++;
        }
        printf("%d\n",s);
    }
    while(X!=0);
    return 0;
}

/*
another solution:
#include<stdio.h>
int main(void)
{
    int a,X,Y,s;
    do
    {
        scanf("%d", &X);
        Y = X;
        s = 0;
        for(a=1; a<=10; a++)
        {
            if (Y%2==0)
            {
                s = s+Y;
            }
            Y++;
        }
        printf("%d\n",s);
    }
    while(X!=0);
    return 0;
}

another solution:
#include<stdio.h>
int main(void)
{
    int a,X,s;
    do
    {
        scanf("%d", &X);
        s = 0;
        for(a=1; a<=10; a++)
        {
            if (X%2==0)
            {
                s = s+X;
            }
            X++;
        }
        printf("%d\n",s);
    }
    while(X-10!=0);
    return 0;
}

*/
