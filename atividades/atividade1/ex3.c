/*
  Exercício 3
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ComparaStrings(char *, char *);

int main(void)
{
  char var1[21], var2[21];
  int res;

  printf("Informe uma palavra:\n");
  scanf("%20s", var1);

  printf("\nInforme outra palavra:\n");
  scanf("%20s", var2);

  /* comparando as duas strings */
  res = ComparaStrings(var1, var2);

  switch (res)
  {
    case 0:
      printf("\nStrings são idênticas: case sensitive");
      break;

    case 1:
      printf("\nStrings são idênticas: case insensitive");
      break;
    
    case 2:
      printf("\nStrings são diferentes");
      break;
  }

  return 0;
}

int ComparaStrings(char *s1, char *s2)
{
  int i;

  if (strcmp(s1, s2) == 0)
  {
    /* iguais: case sensitive */
    return 0;
  }
  
  if (strlen(s1) == strlen(s2))
  {
    /* iguais: case insensitive */
    i = 0;

    while (s1[i] != '\0' && tolower(s1[i]) == tolower(s2[i]))
      i++;

    if (s1[i] == '\0')
      return 1;
  }

  /* diferentes */
  return 2;
}
