/*
  Exercício 6 
*/
#include <stdio.h>
#include <ctype.h>

void Minusculas(char *);

int main(void)
{
  char palavra[21];

  printf("Informe uma palavra:\n");
  scanf("%20s", palavra);

  /* utilizando uma função para converter a string para minúsculas */
  Minusculas(palavra);

  printf("\n%s", palavra);

  return 0;
}

void Minusculas(char *s)
{
  while (*s)
  {
    *s = tolower(*s);
    s++;
  }
}
