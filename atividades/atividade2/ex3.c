/*
  Exercício 3
*/
#include <stdio.h>

int CalculaTempo(int, int, int);

int main(void)
{
  int h, m, s, res;

  printf("Informe três valores:\n");
  scanf("%d %d %d", &h, &m, &s);

  if (h < 0 || m < 0 || s < 0)
    return 1;

  /* determinando a quantidade de tempo correspondente em segundos */
  res = CalculaTempo(h, m, s);

  printf("\n%02dh %02dmin %02dseg = %02d segundos", h, m, s, res);

  return 0;
}

int CalculaTempo(int h, int m, int s)
{
  return s + (m * 60) + (h * 3600);
}
