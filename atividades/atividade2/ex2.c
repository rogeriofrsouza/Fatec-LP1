/*
  Exercício 2
*/
#include <stdio.h>
#include <stdlib.h>

void VerificaTriangulo(int, int, int);
void Imprime(char *);

int main(void)
{
  int a, b, c;

  printf("Informe três valores:\n");
  scanf("%d %d %d", &a, &b, &c);

  /* verificando lados do triângulo */
  if ((a < b + c) && (a > abs(b - c)))
    VerificaTriangulo(a, b, c);
  else
    Imprime("Não é possível formar um triângulo");

  return 0;
}

void VerificaTriangulo(int x, int y, int z)
{
  if (x == y && x == z)
    Imprime("Triângulo equilátero");
  else if (x == y || x == z || y == z)
    Imprime("Triângulo isósceles");
  else
    Imprime("Triângulo escaleno");
}

void Imprime(char *msg)
{
  printf("\n%s", msg);
}
