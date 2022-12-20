#include <stdio.h>

int main(void)
{	
	char letra1, letra2;

	printf("Digite a primeira letra: ");
	scanf("%c", &letra1);
	
	printf("Digite a segunda letra: ");
	scanf(" %c", &letra2);
	
	printf("\nAs letras digitadas foram %c e %c\n", letra1, letra2);
	printf("\nConteúdo EFETIVO das variáveis %d e %d\n", letra1, letra2);
	
	return 0;
}
