#include<stdio.h>
int main(void)
{
    int a;
    for(a=999; a>=0; a--)
    {
        printf("%d\t",a+1);
        if(a%5==0)
        {
            printf("\n");
        }
    }
    return 0;
}
