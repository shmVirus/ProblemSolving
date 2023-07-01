#include <stdio.h>
int main()
{
	int X, Y;
a:
	scanf("%d %d", &X, &Y);
	if (X > Y)
	{
		printf("Decrescente\n");
		goto a;
	}
	else if (X < Y)
	{
		printf("Crescente\n");
		goto a;
	}
	else
	{
		return 0;
	}
	return 0;
}
