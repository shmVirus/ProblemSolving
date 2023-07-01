#include<stdio.h>
int main(void)
{
    float A, X;
    scanf("%f", &A);
    if (0<=A && A<=400)
    {
        X = A+(((int)A*15)/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %\n", X, (int)A*15.0/100);
    }
    if (400<A && A<=800)
    {
        X = A+(((int)A*12)/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %\n", X, (int)A*12.0/100);
    }
    if (800<A && A<=1200)
    {
        X = A+(((int)A*10)/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %\n", X, (int)A*10.0/100);
    }
    if (1200<A && A<=2000)
    {
        X = A+(((int)A*7)/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %\n", X, (int)A*7.0/100);
    }
    if (A>2000)
    {
        X = A+(((int)A*4)/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %\n", X, (int)A*4.0/100);
    }
    return 0;
}
