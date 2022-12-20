#include <stdio.h>

int main(void)
{
	int data, dia, mes, ano;

	printf("Informe a data (ddmmaaaa):\n");
	scanf("%d", &data);
	
	dia = data / 1000000;
	ano = data % 10000;
	
	data = data % 1000000;
	mes = data / 10000;
	
	printf("\nDia: %02d mês: %02d ano: %d\n", dia, mes, ano);
	printf("\n%02d/%02d/%d", dia, mes, ano);

	return 0;
}
