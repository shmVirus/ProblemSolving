#include<stdio.h>
int main(void)
{
    int I=1, J;
    for(I;I<=9;I+=2)
    {
        J=7;
        printf("I=%d J=%d\n",I,J--);
        printf("I=%d J=%d\n",I,J--);
        printf("I=%d J=%d\n",I,J--);
    }
    return 0;
}

/*

another solution:
#include<stdio.h>
int main(void)
{
    int I=1, J;
    for(I;I<=9;I+=2)
    {
        for(J=7;J>=5;J--)
        {
            printf("I=%d J=%d\n", I, J);
        }
    }
    return 0;
}

*/
