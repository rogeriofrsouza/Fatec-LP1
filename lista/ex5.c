/*
  Exercício 5
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ValidaCPF(char *);
void CalculaDigitos(char *, int *, int *);

int main(void)
{
  char s[15], cpf[11];
  int i, cont = 0, d1, d2;

  printf("Informe o CPF:\n");
  scanf("%14s", s);

  /* a) Um CPF é completado com zeros à esquerda até atingir o comprimento padrão */
  if (strlen(s) < 14)
  {
    cont = 14 - strlen(s);

    for (i = 0; i < cont; i++)
      cpf[i] = '0';
  }

  /* removendo caracteres especiais */
  for (i = 0; s[i] != '\0'; i++)
  {
    if (isdigit((int) s[i]))
    {
      cpf[cont] = s[i];
      cont++;
    }
  }

  cpf[cont] = '\0';

  /* b) Se todos os dígitos numéricos do CPF informado forem iguais o CPF é inválido. */
  if (ValidaCPF(cpf) == 0)
  {
    printf("\nCPF inválido");
    return 1;
  }

  CalculaDigitos(cpf, &d1, &d2);

  if ((cpf[9] - '0') == d1 && (cpf[10] - '0') == d2)
    printf("\nVálido");
  else
    printf("\nInválido\nEsperado: %d%d, encontrado: %c%c", d1, d2, cpf[9], cpf[10]);

  return 0;
}

int ValidaCPF(char *cpf)
{
  char aux = *cpf;

  do
    cpf++;
  while (*cpf && *cpf == aux);

  return (*cpf != '\0');
}

void CalculaDigitos(char *cpf, int *d1, int *d2)
{
  int i, soma = 0, cont;

  /* c) Multiplicar cada um dos 9 dígitos iniciais pelo número da sua posição no CPF */
  for (i = 0; i < 9; i++)
    soma += (cpf[i] - '0') * (i + 1);

  /* d) Calcular o resto da divisão do valor obtido por 11. Esse é o primeiro dígito verificador */
  *d1 = soma % 11;

  if (*d1 == 10) *d1 = 0;

  /* e) Multiplicar cada um dos 10 dígitos disponíveis por um valor próprio (11 até 2) */
  soma = 0;
  cont = 11;

  for (i = 0; i < 9; i++)
  {
    soma += (cpf[i] - '0') * cont;
    cont--;
  }

  soma += *d1 * cont;

  /* f) Multiplicar o valor obtido por 10 e calcular o resto da divisão por 11. Esse é o segundo dígito verificador */
  soma *= 10;
  *d2 = soma % 11;

  if (*d2 == 10) *d2 = 0;
}
