#include<stdio.h>
int main(void)
{
    int a, p=1, x=0;
    for (p;p<=5;p++)
    {
        scanf("%d", &a);
        if (a%2==0)
        {
            x++;
        }
    }
    printf("%d valores pares\n", x);
    return 0;
}
