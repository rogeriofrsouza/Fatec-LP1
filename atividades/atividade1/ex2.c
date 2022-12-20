/* 
  Exercício 2
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  char palavra[18];
  int cont, alfa, maiusc, minusc, digit, espec;

  printf("Informe uma palavra:\n");
  scanf("%17s", palavra);

  alfa = maiusc = minusc = digit = espec = 0;

  for (cont = 0; palavra[cont] != '\0'; cont++)
  {
    /* a) A quantidade de letras existentes na palavra. */
    if (isalpha(palavra[cont]))
    {
      alfa++;

      /* b) A quantidade de letras maiúsculas encontradas na palavra. */
      if (isupper(palavra[cont]))
        maiusc++;

      /* c) A quantidade de letras minúsculas que a palavra possui. */
      else
        minusc++;
    }
    /* d) A quantidade de dígitos numéricos encontrados na palavra.  */
    else if (isdigit(palavra[cont]))
      digit++;

    /* e) A quantidade de caracteres especiais da palavra. */
    else if (isgraph(palavra[cont]))
      espec++;
  }

  printf("\nLetras: %d\n", alfa);
  printf("Maiúsculas: %d\n", maiusc);
  printf("Minúsculas: %d\n", minusc);
  printf("Dígitos: %d\n", digit);
  printf("Especiais: %d\n", espec);

  return 0;
}
