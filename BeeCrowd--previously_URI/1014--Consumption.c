#include<stdio.h>
#include<math.h>
int main (void)
{
    int X;
    float Y,Z;
    scanf("%d %f", &X, &Y);
    Z=X/Y;
    printf("%.3f km/l\n",Z);
    return 0;
}
