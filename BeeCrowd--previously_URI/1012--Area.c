#include<stdio.h>
#include<math.h>
int main (void)
{
    double A,B,C,D,E,F,G,H;
    scanf("%lf %lf %lf", &A, &B, &C);
    D=(A*C)/2;
    E=3.14159*pow(C,2);
    F=C*(A+B)/2;
    G=pow(B,2);
    H=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",D,E,F,G,H);
    return 0;
}
