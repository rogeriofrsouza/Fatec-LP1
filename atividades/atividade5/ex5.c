/*
  Exercício 5
*/
#include <stdio.h>

int f(int, int *);

int main(void)
{
  int n = 4;
  
  printf("%d %d\n", f(3, &n), n);  // d) 1 0; 0 0; 2 1; 1 0; 3 1; 2 4
  
  return 0;
}

int f(int n, int *k)
{
  int p = 0, q = 0, resp;
  
  if (n < 2)
  {
    *k = 0;
    resp = n;
  }
  else
  { 
    *k = p + q + 1;
    resp = f(n - 1, &p) + f(n - 2, &q);
  }
  
  printf("%d %d; ", n, *k);
  
  return resp;
}
