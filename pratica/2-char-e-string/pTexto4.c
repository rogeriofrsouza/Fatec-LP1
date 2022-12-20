#include <stdio.h>
#include <string.h>

int main(void)
{
	char palavra[31];

	printf("Informe a palavra: ");
	scanf("%30s", palavra);
	
	printf("\n%s possui %d letras\n", palavra, strlen(palavra));
	
	if (strcmp(palavra, "SOROCABA") == 0)
		printf("ACERTOU\n");
	else
		printf("ERROU!\n");
	
	printf("O: %d\to: %d\tstrcmp(): %d\n", 'O', 'o', strcmp(palavra, "SOROCABA"));
	
	return 0;
}
