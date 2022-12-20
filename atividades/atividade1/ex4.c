/*
  Exercício 4
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char palavra[26], ocorrencias[26];
  int i, j, k, idx;

  printf("Informe uma palavra:\n");
  scanf("%25s", palavra);

  printf("\nPalavra informada:\n%s\n", palavra);

  /* inicializando vetor ocorrencias */
  for (i = 0; i < 26; i++)
    ocorrencias[i] = 0;

  /* pesquisando ocorrências de cada letra */
  for (i = 0; palavra[i] != '\0'; i++)
  {
    if (isalpha((int) palavra[i]))
    {
      idx = ((int) toupper(palavra[i])) - 65;
      ocorrencias[idx]++;
    }
  }

  /* removendo letras repetidas (case insensitive) */
  for (i = 0; palavra[i] != '\0'; i++)
  {
    for (j = i + 1; palavra[j] != '\0'; j++)
    {
      if (toupper(palavra[i]) == toupper(palavra[j]))
      {
        for (k = j; palavra[k] != '\0'; k++)
          palavra[k] = palavra[k + 1];
        
        j--;
      }
    }
  }

  /* imprimindo resultado */
  for (i = 0; palavra[i] != '\0'; i++)
  {
    if (isalpha((int) palavra[i]))
    {
      idx = ((int) toupper(palavra[i])) - 65;
      printf("\n%c - %d", toupper(palavra[i]), ocorrencias[idx]);
    }
  }

  return 0;
}
