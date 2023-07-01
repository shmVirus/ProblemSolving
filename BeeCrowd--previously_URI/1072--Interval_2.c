#include<stdio.h>
int main (void)
{
    int N, X, a=1, b=0, c=0;
    scanf("%d", &X);
    for(a;a<=X;a++)
    {
        scanf("%d", &N);
        if (N>=10 && N<=20)
        {
            b++;
        }
        if (N>20 || N<10)
        {
            c++;
        }
    }
    printf("%d in\n%d out\n", b,c);
    return 0;
}
