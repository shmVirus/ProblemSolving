#include<stdio.h>
int main (void)
{
    float A,B,C,D, E, F, G;
    scanf("%f %f %f %f", &A, &B, &C, &D);
    E=(A*2+B*3+C*4+D*1)/(2+3+4+1);
    printf("Media: %.1f\n", E);
    if (E>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (E<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (E>=5.0 && E<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &F);
        printf("Nota do exame: %.1f\n", F);
        G=(E+F)/2;
        if (G>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if (G<=4.9)
        {
        printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", G);
    }
    return 0;
}
