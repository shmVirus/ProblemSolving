#include<stdio.h>
int main(void)
{
    int i,j=0, T;
    scanf("%d", &T);
    for(i=0; i<1000; i++)
    {
        printf("N[%d] = %d\n", i,j);
        j++;
        if (j==T)
        {
            j = 0;
        }
    }
    return 0;
}
