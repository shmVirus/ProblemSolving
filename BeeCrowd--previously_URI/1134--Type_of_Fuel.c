#include<stdio.h>
int main(void)
{
    int n, a=0,g=0,d=0;
    do
    {
        scanf("%d", &n);
        if (n==1)
        {
            a++;
        }
        else if (n==2)
        {
            g++;
        }
        else if (n==3)
        {
            d++;
        }
    }
    while (n!=4);
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
    return 0;
}
