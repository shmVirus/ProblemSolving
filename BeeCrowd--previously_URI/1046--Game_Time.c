#include<stdio.h>
int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);
    if (A<B)
    {
        printf("O JOGO DUROU %d HORA(S)\n", B-A);
    }
    else if (A>B)
    {
        printf("O JOGO DUROU %d HORA(S)\n", 24-(A-B));
    }
    else
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}
