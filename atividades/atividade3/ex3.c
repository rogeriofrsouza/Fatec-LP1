/*
  Exercício 3
*/
#include <stdio.h>

int Fibonacci(int);

int main(void)
{
  int n = 0, r;
  
  while (n >= 0)
  { 
    printf("Informe o valor:\n");
    scanf("%d", &n);
    
    if (n >= 0)
    {
      /* b) Função que realiza o processamento */
      r = Fibonacci(n);

      printf("\nO valor é %d\n", r);  /* a) O valor é 13 */
    }
  }
  
  return 0;
} 

int Fibonacci(int n)
{
  int r, c, x1, x2;

  if (n < 2)
    r = n;
  else
  {
    c = 2; x1 = 1; x2 = 0;
    
    while (c <= n)
    {
      r = x1 + x2;
      x2 = x1;
      x1 = r;
      
      c++; 
    }
  }
  
  return r;
}
