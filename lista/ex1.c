/*
  Exercício 1
*/
#include <stdio.h>
#include <string.h>

int VerificaNomes(char *, char *);
int IsVogal(char);

int main(void)
{
  int n;
  char nome1[21], nome2[21];

  printf("Casos de teste:\n");
  scanf("%d", &n);

  if (n < 1 || n > 20)
    return 1;
  
  while (n)
  {
    printf("\nInforme dois nomes:\n");
    scanf("%20s %20s", nome1, nome2);

    if (VerificaNomes(nome1, nome2))
      printf("\nYes\n");
    else
      printf("\nNo\n");

    n--;
  }

  return 0;
}

int VerificaNomes(char *n1, char *n2)
{
  /* nomes com mesmo comprimento */
  if (strlen(n1) == strlen(n2))
  {
    for (; *n1 && *n2; n1++, n2++)
    {
      /* letras vogais */
      if (IsVogal(*n1) && IsVogal(*n2)) 
        continue;
      else if (*n1 != *n2) 
        break;
    }

    if (*n1 == '\0')
      return 1;
  }
  
  return 0;
}

int IsVogal(char c)
{
  char v[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  int i = 0;

  /* return (strchr(v, c) != NULL) */

  while (v[i] && v[i] != c)
    i++;

  return (v[i] != '\0');
}
