/*
  Exercício 1
*/
#include <stdio.h>

int Impar(int);

int main(void)
{
  int num;
  
  printf("Informe o número:\n");
  scanf("%d", &num);
  
  if (Impar(num))
    printf("\nO número %d é IMPAR\n", num);
  else
    printf("\nO número %d é PAR\n", num);
  
  return 0; 
}

/* definindo a função Impar() */
int Impar(int n)
{
  if (n < 0) n = -n;

  return (n % 2 == 1);
}
