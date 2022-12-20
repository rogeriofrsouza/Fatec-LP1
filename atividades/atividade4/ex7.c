/*
  Exercício 7
*/
#include <stdio.h>

void Cripto(char *, char*);

int main(void) 
{  
  char texto1[9], texto2[9], texto3[9];
  
  printf("Informe um texto de até 8 caracteres:\n");
  scanf("%8[^\n]", texto1);
  
  Cripto(texto1, texto2);
  Cripto(texto2, texto3);
  
  printf("\nCriptografado:\n%s\n\nDescriptografado:\n%s\n", texto2, texto3);
  
  return 0;
}

void Cripto(char *texto, char *destino)
{
  char *ctrl1, *ctrl2;
  int c;

  ctrl1 = "aBCdeFGHiJ91#%21KlmNOpQrstUVWxyz@65430'$[]{}";
	ctrl2 = "!8-_?:;bcDEfghIj7.<>=+*&/|,kLMnoPqR)STuvwXYZ";

  /* pesquisando caracter */
  while (*texto)
  {
    c = 0;
    while (ctrl1[c] != '\0' && ctrl1[c] != *texto) c++;
    
    /* Se o caracter existir na primeira string de controle, colocar em seu lugar o  
    caracter equivalente na segunda string de controle */
    if (ctrl1[c]) *destino = ctrl2[c];
    else
    {
      c = 0;
      while (ctrl2[c] != '\0' && ctrl2[c] != *texto) c++;
      
      /* Senão, se o caracter existir na segunda string de controle, colocar em seu lugar 
      o caracter equivalente na primeira string de controle */
      if (ctrl2[c]) *destino = ctrl1[c];
    }

    texto++, destino++;
  }

  *destino = '\0';
}
