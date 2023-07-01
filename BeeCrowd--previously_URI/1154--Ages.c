#include<stdio.h>
int main(void)
{
    int i=0;
    float a, s=0;
    do
    {
        scanf("%f", &a);
        if (a>=0)
        {
            s=s+a;
            i++;
        }
        else
        {
            break;
        }
    }
    while(a>=0);
    s=s/i;
    printf("%.2f\n",s);
    return 0;
}
