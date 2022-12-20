#include <stdio.h>

int main(void)
{	
	int cont = 0;

	/* imprimindo tabela ASCII */
	while (cont < 127)
	{
		printf("%3d: %c\n", cont, cont);
		cont++;
	}
	
	return 0;
}
