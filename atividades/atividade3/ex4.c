/*
  Exercício 4
*/
#include <stdio.h>
#include <math.h>

float Media(float *, int);
float Variancia(float *, int);

int main(void)
{
  int n, i;

  printf("Informe o valor de N:\n");
  scanf("%d", &n);

  if (n < 1 || n > 100)
    return 1;

  /* declarando vetor e armazenando valores */
  float vet[n];

  printf("\nInforme os %d valores do vetor:\n", n);

  for (i = 0; i < n; i++)
    scanf("%f", &vet[i]);

  printf("\nMédia: %.4f", Media(vet, n));
  printf("\nVariância: %.4f", Variancia(vet, n));

  return 0;
}

float Media(float *vet, int n)
{
  float m = 0.0;
  int i;

  // m = Σx / N
  for (i = 0; i < n; i++)
    m += vet[i];
  
  return (m / n);
}

float Variancia(float *vet, int n)
{
  float m, v;
  int i;

  m = Media(vet, n);

  // V = Σ(x - m)² / N
  for (i = 0; i < n; i++)
    v += pow(vet[i] - m, 2);

  return (v / n);
}
