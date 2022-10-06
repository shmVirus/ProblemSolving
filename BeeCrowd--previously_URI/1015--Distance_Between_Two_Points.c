#include<stdio.h>
#include<math.h>
int main (void)
{
    double A,B,C,D,E;
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);
    E=pow((pow(A-C, 2)+pow(B-D, 2)), 0.5);
    printf("%.4lf\n", E);
    return 0;
}
