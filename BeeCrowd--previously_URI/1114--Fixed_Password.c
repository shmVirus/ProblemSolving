#include<stdio.h>
int main(void)
{
	int N;
a:
     scanf("%d", &N);
     if (N==2002)
     {
     	printf("Acesso Permitido\n");
     }
     else
     {
     	printf("Senha Invalida\n");
     	goto a;
     }
     return 0;
}
