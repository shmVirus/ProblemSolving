#include<stdio.h>
int main(void)
{
    int a,b,n, i=0,g=0,d=0;
    do
    {
        scanf("%d %d", &a, &b);
        if (a>b)
        {
            i++;
        }
        else if (a<b)
        {
            g++;
        }
        else
        {
            d++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &n);
        if (n!=1)
        {
            printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nInter venceu mais\n",i+g,i,g,d);
        }
    }
    while (n==1);
    return 0;
}


/*
another solution:
#include<stdio.h>
int main(void)
{
    int a,b,n, i=0,g=0, d=0;
x:
    scanf("%d %d", &a, &b);
    if (a>b)
    {
        i++;
    }
    else if (a<b)
    {
        g++;
    }
    else
    {
        d++;
    }
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &n);
    if (n==1)
    {
        goto x;
    }
    else if (n==2)
    {
        printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nInter venceu mais\n",i+g,i,g,d);
    }
    return 0;
}

*/
