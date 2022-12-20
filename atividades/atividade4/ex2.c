/*
  Exercício 2
*/
char * Teste(char *s1, const char *s2)
{
  /* a) Copiar o conteúdo da região de memória referenciada pelo identificador s1 para a 
  região de memória referenciada pelo identificador s2. */
  char *aux;
  
  for (aux = s2; *s1; aux++, s1++)
    *aux = *s1;

  /* b) Atribuir o valor '\0' para todas as posições de memória entre o endereço referenciado 
  pelo identificador s1 até a região de memória referenciada pelo identificador s2. */
  while (*s1)
  {
    *s1 = '\0';
    s1++;
  }

  /* c) Comparar o conteúdo de memória que se inicia na posição referenciada pelo 
  identificador s1 e ir até a ocorrência de um valor '\0' com o conteúdo da região de 
  memória referenciada pelo identificador s2. */
  while (*s1 && *s2)
  {
    printf("%d\n", *s1 == *s2);
    s1++, s2++;
  }

  /* d) Substituir os elementos armazenados na região de memória referenciada pelo 
  identificador s1 pelos elementos armazenados na região de memória referenciada pelo 
  identificador s2. */
  while (*s2)
  {
    *s1 = *s2;
    s1++, s2++;
  }

  /* e) Copiar os elementos contidos na região de memória referenciada pelo identificador s2 
  após os elementos armazenados na região de memória referenciada pelo identificador s1. */
  while (*s1) s1++;
  
  for (; *s2; s1++, s2++) 
    *s1 = *s2;

  return aux;
}
