#include<stdio.h>
int main (void)
{
    int N, x=1;
    float a,b,c, r;
    scanf("%d", &N);
    for(x;x<=N;x++)
    {
        scanf("%f %f %f", &a,  &b, &c);
        r = (((a*2)+(b*3)+(c*5))/10);
        printf("%.1f\n",r);
    }
    return 0;
}
