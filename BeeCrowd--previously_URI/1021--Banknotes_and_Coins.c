#include<stdio.h>
int main (void)
{
    double C;
    scanf("%lf", &C);

    int A=C;
    int B=(C-A)*100;



    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", A/100);
    A%=100;
    printf("%d nota(s) de R$ 50.00\n", A/50);
    A%=50;
    printf("%d nota(s) de R$ 20.00\n", A/20);
    A%=20;
    printf("%d nota(s) de R$ 10.00\n", A/10);
    A%=10;
    printf("%d nota(s) de R$ 5.00\n", A/5);
    A%=5;
    printf("%d nota(s) de R$ 2.00\n", A/2);

    printf("MOEDAS:\n");
    A%=2;
    printf("%d moeda(s) de R$ 1.00\n", A);
    B%=100;
    printf("%d moeda(s) de R$ 0.50\n", B/50);
    B%=50;
    printf("%d moeda(s) de R$ 0.25\n", B/25);
    B%=25;
    printf("%d moeda(s) de R$ 0.10\n", B/10);
    B%=10;
    printf("%d moeda(s) de R$ 0.05\n", B/5);
    B%=5;
    printf("%d moeda(s) de R$ 0.01\n", B/1);

    return 0;
}
