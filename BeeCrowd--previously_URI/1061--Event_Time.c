#include<stdio.h>
int main(void)
{
    int a,b,c,d,e,f,g,h, p,q,r,s;
    scanf("Dia %d", &a);
    scanf("%d : %d : %d\n", &b, &c, &d);
    scanf("Dia %d", &e);
    scanf("%d : %d : %d", &f, &g, &h);


    s = h-d;
    r = g-c;
    q = f-b;
    p = e-a;


    if (q<0)
    {
        q = 24+q;
        p--;
    }
    if (r<0)
    {
        r = 60+r;
        q--;
    }
    if (s<0)
    {
        s = 60+s;
        r--;
    }




    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", p,q,r,s);
    return 0;
}
