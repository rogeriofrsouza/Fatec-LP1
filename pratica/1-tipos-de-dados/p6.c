#include <stdio.h>
#include <ctype.h>

int main(void)
{	
	char palavra[21];
	int cont = 0;
	
	scanf("%s", palavra);
	
	/* transformando caracteres em uppercase */
	while (palavra[cont] != '\0')
	{	
		palavra[cont] = toupper(palavra[cont]);
		cont++;
	}
	
	printf("\n%s\n", palavra);
	
	return 0;
}
