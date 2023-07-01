#include<stdio.h>
int main(void)
{
    float a, b, e;
    scanf("%f", &a);
    if ( a>=0 && a<=2000 )
    {
        printf("Isento\n");
    }
    else if (a>2000 && a<=3000)
    {
        b = a-2000;
        e = ((b*8)/100);
        printf("R$ %.2f\n", e);
    }
    else if (a>3000 && a<=4500)
    {
        b = a-3000;
        e = (((1000*8)/100)+((b*18)/100));
        printf("R$ %.2f\n", e);
    }
    else if (a>4500)
    {
        b = a - 4500;
        e = (((1000*8)/100)+((1500*18)/100)+(((b*28)/100)));
        printf("R$ %.2f\n", e);
    }
    return 0;
}
