#include <stdio.h>

int main(void)
{
	long long int vRA, vNovoRA;
	int escola, curso, ano, semestre, turno, sequencial;
	
	printf("Informe o RA:\n");
	scanf("%lld", &vRA);
	
	printf("\nO RA informado é: %013lld\n", vRA);
	
	escola = vRA / 10000000000;
	vRA %= 10000000000;

	curso = vRA / 10000000;
	vRA %= 10000000;

	ano = vRA / 100000;
	vRA %= 100000;

	semestre = vRA / 10000;
	vRA %= 10000;

	turno = vRA / 1000;
	sequencial = vRA % 1000;
	
	printf("Escola .....: %03d\n", escola);
	printf("Curso ......: %03d\n", curso);
	printf("Ano ingresso: %02d\n", ano);
	printf("Semestre ...: %d\n", semestre);
	printf("Turno ......: %d\n", turno);
	printf("Sequencial .: %03d\n", sequencial);

	/* printf("\nO próximo RA é: %03d%03d%02d%d%d%03d\n", escola, curso, ano, semestre, turno, sequencial + 1); */
	
	/* gerando o novo RA e o armazenando na variável vNovoRA */
	vNovoRA = escola * 10000000000 + curso * 10000000 + ano * 100000 + semestre * 10000 + turno * 1000 + (sequencial + 1);
	
	printf("\nO próximo RA é: %013lld\n", vNovoRA);
	
	return 0;
}
