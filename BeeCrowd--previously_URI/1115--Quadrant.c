#include <stdio.h>
int main()
{
	int X, Y;
a:
	scanf("%d %d", &X, &Y);
	if (X > 0 && Y > 0)
	{
		printf("primeiro\n");
		goto a;
	}
	else if (X > 0 && Y < 0)
	{
		printf("quarto\n");
		goto a;
	}
	else if (X < 0 && Y < 0)
	{
		printf("terceiro\n");
		goto a;
	}
	else if (X < 0 && Y > 0)
	{
		printf("segundo\n");
		goto a;
	}
	if (X == 0 || Y == 0)
	{
		return 0;
	}
	return 0;
}
