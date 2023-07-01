#include<stdio.h>
#include<math.h>
int main (void)
{
    double A,B,C;
    scanf("%lf %lf %lf", &A, &B, &C);
    if (A!=0 && (sqrt(pow(B,2)-4*A*C))>0)
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n",(-B+(sqrt(pow(B,2)-4*A*C)))/(2*A),(-B-(sqrt(pow(B,2)-4*A*C)))/(2*A));
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}
