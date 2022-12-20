/*
  Exercício 2
*/
#include <stdio.h>
#include <math.h>

struct regPonto
{
  float x, y;
};

float CalculaDistancia(struct regPonto, struct regPonto);

int main(void)
{
  struct regPonto p1, p2;

  while (1)
  {
    printf("\nPar de pontos:\n");
    scanf("%f %f %f %f", &p1.x, &p1.y, 
                         &p2.x, &p2.y);

    if (p1.x == 0 && p1.y == 0 && 
        p2.x == 0 && p2.y == 0)
      break;
    
    printf("\nDistância: %f\n", CalculaDistancia(p1, p2));
  }

  return 0;
}

float CalculaDistancia(struct regPonto p1, struct regPonto p2)
{
  return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
