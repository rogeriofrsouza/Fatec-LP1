#include <stdio.h>

int main(void)
{	
	double valor = 1000.0;
	int cont = 0;

	while (cont < 1000 * 10)
	{	
		valor -= 0.1;
		cont++;
	}

	printf("Valor: %.15lf %d\n", valor, cont);
	// printf("Valor: %f %d", valor, cont);

	return 0;
}
