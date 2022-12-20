/*
  Exercício 3
*/
#include <stdio.h>

int CalculaMatriz(int *, int [][2], int);

int main(void)
{
  int i, j, pecaMes[3][3], granaPeca[3][2], granaMes[3][2];
  char meses[][4] = {"JAN", "FEV", "MAR"};

  /* produção das peças P1, P2 e P3 nos meses de Janeiro a Março */
  printf("PecaMes\n---------\n");

  for (i = 0; i < 3; i++)
  {
    printf("%s: ", meses[i]);

    for (j = 0; j < 3; j++)
      scanf("%d", &pecaMes[i][j]);
  }

  /* custo de cada tipo de peça e a sua respectiva margem de lucro */
  printf("\nGranaPeca\n---------\n");

  for (i = 0; i < 3; i++)
  {
    printf("P%d: ", i + 1);

    for (j = 0; j < 2; j++)
      scanf("%d", &granaPeca[i][j]);
  }

  /* gerando e exibindo na tela a matriz GranaMes */
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
      granaMes[i][j] = CalculaMatriz(pecaMes[i], granaPeca, j);
  }

  printf("\nGranaMes\n---------");

  for (i = 0; i < 3; i++)
  {
    printf("\n%s: ", meses[i]);

    for (j = 0; j < 2; j++)
      printf("%d ", granaMes[i][j]);
  }

  return 0;
}

int CalculaMatriz(int *v1, int v2[][2], int j)
{
  int res = 0;

  for (int i = 0; i < 3; i++)
    res += v1[i] * v2[i][j];
  
  return res;
}
