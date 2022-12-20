/*
  Exercício 8
*/
#include <stdio.h>
#include <stdlib.h>

void GeraRA(char *, char *, char *, char *, char *, char *, char *);

int main(void)
{	
	char vRA[14], escola[4], curso[4], ano[3], semestre[2], turno[2], sequencial[4], vNovoRA[14];
	int i;

	printf("Informe o RA:\n");
	scanf("%13s", vRA);

	for (i = 0; i < 14; i++)
	{	
		if (i < 3)
			escola[i] = vRA[i];
		else if (i < 6)
			curso[i - 3] = vRA[i];
		else if (i < 8)
			ano[i - 6] = vRA[i];
		else if (i < 9)
			semestre[i - 8] = vRA[i];
		else if (i < 10)
			turno[i - 9] = vRA[i];
		else
			sequencial[i - 10] = vRA[i];
	}
	
	escola[3] = '\0';
	curso[3] = '\0';
	ano[2] = '\0';
	semestre[1] = '\0';
	turno[1] = '\0';
	sequencial[3] = '\0';
	
	printf("\nRA informado: %s\n", vRA);
	
	printf("\nEscola .....: %s\n", escola);
	printf("Curso ......: %s\n", curso);
	printf("Ano ingresso: %s\n", ano);
	printf("Semestre ...: %s\n", semestre);
	printf("Turno ......: %s\n", turno);
	printf("Sequencial .: %s\n", sequencial);

	/* gerando o novo RA e o armazenando na variável vNovoRA */
  GeraRA(escola, curso, ano, semestre, turno, sequencial, vNovoRA);

	printf("\nPróximo RA: %s\n", vNovoRA);
	
	return 0;
}

void GeraRA(char *e, char *c, char *a, char *s, char *t, char *seq, char *vNovoRA)
{
  int iSeq = atoi(seq);
	iSeq++;

	sprintf(vNovoRA, "%s%s%s%s%s%03d", e, c, a, s, t, iSeq);
}
