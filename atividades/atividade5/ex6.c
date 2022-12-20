/*
  Exercício 6
*/
#include <stdio.h>

int a[6] = {0, 1, 2, 3, 4, 5};

int f(int [], int);

int main(void)
{
  printf("%d\n", f(a, 6));  // b) 36

  return 0;
}

int f(int a[], int n)
{
  if (n <= 0)
    return 1;

  return a[n - 1] * f(a, n - 2) + 1;
}
