#include<stdio.h>
int main(void)
{
    int A[100], i;
    float a;
    for (i=0; i<10; i++)
    {
        scanf("%f", &a);
        if (a>10)
        {
            continue;
        }
        else
        {
            printf("A[%d] = %.1f\n", i, a);
        }
    }
    return 0;
}
