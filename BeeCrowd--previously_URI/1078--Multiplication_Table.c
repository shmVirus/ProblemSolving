#include<stdio.h>
#include<math.h>
int main (void)
{
    int N, a=1;
    scanf("%d", &N);
    for(a;a<=10;a++)
    {
        printf("%d x %d = %d\n", a, N, a*N);
    }
    return 0;
}
