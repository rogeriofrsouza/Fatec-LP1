/*
  Exercício 2
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* armazena as medidas dos lados do triângulo */
struct regTriang 
{ 
  float a, b, c; 
};

int VerificaTriang(struct regTriang);
float CalculaArea(struct regTriang);

int main(void)
{
  struct regTriang triangulo;
  int res;
  
  while (1)
  { 
    printf("Informe os lados do triângulo:\n");
    scanf("%f %f %f", &triangulo.a, &triangulo.b, &triangulo.c);
    
    if (triangulo.a == 0.0 || triangulo.b == 0.0 || triangulo.c == 0.0)
      break;
    
    /* verifica se as medidas fornecidas podem ou não formar um triângulo */
    res = VerificaTriang(triangulo);

    if (res == 0)
      printf("\nNao é um triângulo\n\n");
    else
    {
      printf("\nA área é: %.2f", CalculaArea(triangulo));
      printf("\nTriângulo ");

      switch (res)
      {
        case 1: printf("ESCALENO\n\n"); break;
        case 2: printf("ISÓSCELES\n\n"); break;
        case 3: printf("EQUILÁTERO\n\n"); break;
      }
    }
  }
  
  return 0;
}

int VerificaTriang(struct regTriang tri)
{
  if ((tri.a < tri.b + tri.c) && (tri.a > abs(tri.b - tri.c)))
  {
    /* Escaleno */
    if (tri.a == tri.b && tri.a == tri.c)
      return 3;
    
    /* Isósceles */
    if (tri.a == tri.b || tri.a == tri.c || tri.b == tri.c)
      return 2;

    /* Escaleno */
    return 1;
  }

  /* Não é possível formar triângulo */
  return 0;
}

float CalculaArea(struct regTriang tri)
{
  float semip = (tri.a + tri.b + tri.c) / 2;

  return sqrt(semip * (semip - tri.a) * (semip - tri.b) * (semip - tri.c));
}
