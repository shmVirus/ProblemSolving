#include<stdio.h>
#include<math.h>
int main (void)
{
    double R,V;
    scanf("%lf", &R);
    V=(4.0/3)*3.14159*pow(R,3);
    printf("VOLUME = %.3lf\n",V);
    return 0;
}
