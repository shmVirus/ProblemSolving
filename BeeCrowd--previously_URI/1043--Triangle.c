#include<stdio.h>
#include<math.h>
int main (void)
{
    float A,B,C, X, Y;
    scanf("%f %f %f", &A, &B, &C);
    if (A+B>C && B+C>A && C+A>B)
    {
        X=A+B+C;
        printf("Perimetro = %.1f\n", X);
    }
    else
    {
        Y=(C*(A+B))/2;
        printf("Area = %.1f\n", Y);
    }
    return 0;
}
