#include<stdio.h>
int main(void)
{
    int i, V, N[10];
    scanf("%d", &V);
    for (i=0; i<10; i++)
    {
        printf("N[%d] = %d\n", i,V);
        V*=2;
    }
    return 0;
}
