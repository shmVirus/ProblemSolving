#include<stdio.h>
int main(void)
{
	int N, a=1,  X, Y;
	float z;
	scanf("%d", &N);
	for (a;a<=N;a++)
	{
		scanf("%d %d", &X,&Y);
		if (Y==0)
		{
			printf("divisao impossivel\n");
		}
		else
		{
				z = (float) X/Y;
				printf("%.1f\n", z);
		}
	}
	return 0;
}
