/*
	Exercício 1
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{	
	char palavra[16], aux[16];
	int cont;

	printf("Informe uma palavra:\n");
	scanf("%15s", palavra);
	
	strcpy(aux, palavra);

	/* a) Do jeito que foi digitada. */
	printf("\n%s", palavra);
	
	/* b) Toda em minúsculas. */
	for (cont = 0; palavra[cont] != '\0'; cont++)
		palavra[cont] = tolower(palavra[cont]);

	printf("\n%s", palavra);
	
	/* c) Toda em maiúsculas. */
	for (cont = 0; palavra[cont] != '\0'; cont++)
		palavra[cont] = toupper(palavra[cont]);

	printf("\n%s", palavra);
	
	/* d) Com a primeira letra em maiúsculas e o restante em minúsculas. */
	palavra[0] = toupper(palavra[0]);

	for (cont = 1; palavra[cont] != '\0'; cont++)
		palavra[cont] = tolower(palavra[cont]);

	printf("\n%s", palavra);
	
	/* e) Com os caracteres invertidos quanto a maiúsculas e minúsculas. */
	for (cont = 0; palavra[cont] != '\0'; cont++)
	{
		if (isupper(aux[cont]))
			aux[cont] = tolower(aux[cont]);
		else
			aux[cont] = toupper(aux[cont]);
	}
	
	printf("\n%s", aux);
	
	return 0;
}
