/*
  Exercício 4
*/
#include <stdio.h>

int A(int, int, int *);

int main(void)
{
  int n, cont = 0;

  n = A(1, 2, &cont);

  printf("Valor retornado: %d", n);
  printf("\nChamadas recursivas: %d", cont);  // a) 6

  return 0; 
}

int A(int m, int n, int *c)
{
  *c += 1;

  if (m == 0)
    return n + 1;
  else
  {
    if (n == 0)
      return A(m - 1, 1, c);
    else
      return A(m - 1, A(m, n - 1, c), c);
  }
}
