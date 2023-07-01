#include<stdio.h>
#include<math.h>
int main (void)
{
    float A;
    scanf("%f", &A);
    if (0<=A && A<=25)
    {
        printf("Intervalo [0,25]\n");
    }
    else if (25<A && A<=50)
    {
        printf("Intervalo (25,50]\n");
    }
    else if (50<A && A<=75)
    {
        printf("Intervalo (50,75]\n");
    }
    else if (75<A && A<=100)
    {
        printf("Intervalo (75,100]\n");
    }
    else
    {
        printf("Fora de intervalo\n");
    }
    return 0;
}
