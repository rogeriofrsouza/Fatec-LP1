/*
  Exercício 4
*/
#include <stdio.h>

int VerificaPertinencia(int, int, int, int, int, int);

int main(void)
{
  int n, x0, y0, x1, y1, x, y;

  printf("Casos de teste:\n");
  scanf("%d", &n);

  while (n > 0)
  {
    printf("\nInforme 6 valores:\n");
    scanf("%d %d %d %d %d %d", &x0, &y0, &x1, &y1, &x, &y);

    /* 
      (x0, y0) vértice inferior esquerdo do retângulo
      (x1, y1) ao vértice superior direito 
      (x, y) coordenadas do ponto a ser verificado 
    */
    if (x1 > x0 && y1 > y0)
    {
      if (VerificaPertinencia(x0, y0, x1, y1, x, y))
        printf("\nContido\n");
      else
        printf("\nNÃO-contido\n");
    }
    else
      printf("\nImpossível formar um retângulo\n");

    n--;
  }

 return 0;
}

int VerificaPertinencia(int x0, int y0, int x1, int y1, int x, int y)
{
  return ((x >= x0 && x <= x1) && (y >= y0 && y <= y1));
}
