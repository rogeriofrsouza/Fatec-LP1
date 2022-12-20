/*
  Exercício 1
*/
#include <stdio.h>

int a, b;  // Variáveis globais

void Mist(int, int *);

int main(void)
{
  a = 1;
  b = 0;
  
  Mist(a, &b);
  printf("%d %d", a, b);  // e) 1 3
}

void Mist(int x, int *y)
{
  x = *y + a + 1;
  *y = x + b + 1;
}
