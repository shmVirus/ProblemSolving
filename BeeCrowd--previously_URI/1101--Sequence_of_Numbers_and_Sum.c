#include<stdio.h>
int main(void)
{
	int M,N, a;
	while(scanf("%d %d", &M, &N))
    {
        if (M<=0 || N<=0)
        {
            break;
        }
        else if (M>N)
        {
            M = M+N;
            N = M-N;
            M = M-N;
        }
        a = 0;
        for (M;M<=N;M++)
        {
            printf("%d ", M);
            a = a + M;
        }
        printf("Sum=%d\n", a);
    }
	return 0;
}


/*
another solution:
#include <stdio.h>
int main(void)
{
	int M,N, a;
b:
	scanf("%d %d", &M, &N);
	if (M<=0 || N<=0)
	{
	    return 0;
	}
	else if (M>N)
	{
		M = M+N;
		N = M-N;
		M = M-N;
	}
	a = 0;
	for (M;M<=N;M++)
	{
	    printf("%d ", M);
		a = a + M;
	}
	printf("Sum=%d\n", a);
	if (M!=0 || N!=0)
    {
        goto b;
    }
	return 0;
}

another solution:
#include<stdio.h>
int main(void)
{
	int M,N, a;
	do
    {
        scanf("%d %d", &M, &N);
        if (M<=0 || N<=0)
        {
            break;
        }
        else if (M>N)
        {
            M = M+N;
            N = M-N;
            M = M-N;
        }
        a = 0;
        for (M;M<=N;M++)
        {
            printf("%d ", M);
            a = a + M;
        }
        printf("Sum=%d\n", a);
    }
    while(M!=0 || N!=0);
	return 0;
}

*/
