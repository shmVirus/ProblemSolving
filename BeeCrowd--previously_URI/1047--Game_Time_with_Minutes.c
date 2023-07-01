#include<stdio.h>
int main(void)
{
    int A,B, X,Y, DH,DM;
    scanf("%d %d %d %d", &A, &X, &B, &Y);
    DH = B-A;
    DM = Y-X;
    if (DH<0)
    {
        DH = 24+DH;
    }
    if (DM<0)
    {
        DM = 60+DM;
        DH--;
    }
    if (A==B && X==Y)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", DH, DM);
    }
    return 0;
}
