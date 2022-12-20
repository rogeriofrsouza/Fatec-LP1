/*
	Calcula o fatorial de um número de 0 a 12
*/
#include <stdio.h>

int main(void)
{
	int num, fat, cont;

	printf("Informe o número:\n");
	scanf("%d", &num);

	if (num == 0)
		fat = 1;
	else
	{	
		fat = num;
		cont = num - 1;

		while (cont > 1)
		{
			fat *= cont;
			cont--;
		}
	}
	
	printf("%d! = %d\n", num, fat);
	
	return 0;
}
