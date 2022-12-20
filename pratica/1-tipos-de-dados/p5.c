#include <stdio.h>

int main(void)
{	
	char letra1, letra2, valor;

	scanf("%c", &letra1);
	scanf("%hd", &valor);
	
	/* caractere com maior numeração na tabela ASCII */
	letra2 = letra1 + valor;
	
	printf("Original:\t%c %d\nModificado:\t%c %d\n", letra1, letra1, letra2, letra2);
	
	return 0;
}
