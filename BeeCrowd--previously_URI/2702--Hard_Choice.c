#include<stdio.h>
int main(void)
{
    int a,b,c,d,e,f, x,y,z, n=0;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &d, &e, &f);
    x = d-a;
    y = e-b;
    z = f-c;
    if (x>0)
    {
        n+=x;
    }
    if (y>0)
    {
        n+=y;
    }
    if (z>0)
    {
        n+=z;
    }
    printf("%d\n",n);
    return 0;
}
