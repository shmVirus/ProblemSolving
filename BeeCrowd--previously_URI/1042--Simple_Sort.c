#include<stdio.h>
int main (void)
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A<=B)
    {
        if (A<=C)
        {
            if (B<=C)
            {
                printf("%d\n%d\n%d", A, B, C);
            }
            else
            {
                printf("%d\n%d\n%d", A, C, B);
            }
        }
    }
    if (B<=C)
    {
        if (B<=A)
        {
            if (C<=A)
            {
                printf("%d\n%d\n%d", B, C, A);
            }
            else
            {
                printf("%d\n%d\n%d", B, A, C);
            }
        }
    }
    if (C<=A)
    {
        if (C<=B)
        {
            if (B<=A)
            {
                printf("%d\n%d\n%d", C, B, A);
            }
            else
            {
                printf("%d\n%d\n%d", C, A, B);
            }
        }
    }
    printf("\n\n%d\n%d\n%d\n", A, B, C);
    return 0;
}
