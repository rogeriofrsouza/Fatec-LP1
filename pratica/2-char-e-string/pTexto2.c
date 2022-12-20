#include <stdio.h>
#include <string.h>

int main(void)
{	
	char palavra[21];
	int cont;

	printf("Informe a palavra:\n");
	scanf("%20s", palavra);
	
	printf("\nA palavra digitada foi: %s\n\n", palavra);

	/* imprimindo números */
	for (cont = 0; palavra[cont] != '\0'; cont++)
		printf("%4d", palavra[cont]);

	printf("\n");

	/* imprimindo letras */
	for (cont = 0; palavra[cont] != '\0'; cont++)
		printf("%4c", palavra[cont]);
	
	printf("\n\nComprimento da palavra: %d ", strlen(palavra));
	
	return 0;
}
