#include<stdio.h>
int main(void)
{
    float a, y=0, z;
    int p=1, x=0;
    for (p;p<=6;p++)
    {
        scanf("%f", &a);
        if (a>0)
        {
            x++;
            y = y+a;
            z = y/4;
        }
    }
    printf("%d valores positivos\n%.1f\n", x,z);
    return 0;
}
