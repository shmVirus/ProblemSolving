#include<stdio.h>
int main()
{
    int t,T, PA,PB, n;
    double G1,G2;
    scanf("%d",&T);
    for (t=1; t<=T; t++)
    {
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        n = 0;
        while(PA<=PB)
        {
            PA = PA+(PA*(G1/100));
            PB = PB+(PB*(G2/100));
            n++;
            if (n>100)
            {
                break;
            }
        }
        if (n>100)
        {
            printf("Mais de 1 seculo.\n");
        }
        else
        {
            printf("%d anos.\n",n);
        }
    }
    return 0;
}
