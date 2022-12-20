#include <stdio.h>

int main(void)
{	
	char codigo = 33;

	/* imprimindo tabela ASCII a partir de 33 */
	while (codigo < 127)
	{
		printf("%i: %c\n", codigo, codigo);
		codigo++;
	}
	
	return 0;
}
