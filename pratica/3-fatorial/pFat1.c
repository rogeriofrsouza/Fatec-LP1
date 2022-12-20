/*
	Calcula o fatorial de um número de 0 a 12
	Utiliza subrotina
*/
#include <stdio.h>

int Fatorial(int);

int main(void)
{	
	int num, fat;

	printf("Informe o número:\n");
	scanf("%d", &num);

	if (num < 0)
		return 1;
	
	fat = Fatorial(num);
	
	printf("%d! = %d\n", num, fat);
	
	return 0;
}

int Fatorial(int n)
{	
	int res, cont;
	
	if (n < 2)
		return 1;
	
	res = n;
	cont = n - 1;

	while (cont > 1)
	{	
		res *= cont;
		cont--;
	}

	return res;
}
