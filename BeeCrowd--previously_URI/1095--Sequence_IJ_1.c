#include<stdio.h>
int main(void)
{
    int I=1, J=60;
    for(J;J>=0;J-=5)
    {
        printf("I=%d J=%d\n", I, J);
        I+=3;
    }
    return 0;
}
