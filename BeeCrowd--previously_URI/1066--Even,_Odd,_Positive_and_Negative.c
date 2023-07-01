#include<stdio.h>
int main(void)
{
    int a, p=1, w=0, x=0, y=0, z=0;
    for (p;p<=5;p++)
    {
        scanf("%d", &a);
        if (a>0)
        {
            w++;
        }
        if (a<0)
        {
            x++;
        }
        if (a%2==0)
        {
            y++;
        }
        else
        {
            z++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", y,z,w,x);
    return 0;
}
