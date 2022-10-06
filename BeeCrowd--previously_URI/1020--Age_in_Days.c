#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", A/365, A%365/30, A%365%30);
    return 0;
}
