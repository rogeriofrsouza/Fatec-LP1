/*
  Exercício 4
*/
#include <stdio.h>

struct regData
{
  unsigned char dia, mes;
  unsigned short int ano;
};

int CalculaDia(struct regData);

int main(void)
{
  struct regData data;
  char diasSemana[][14] = {"Domingo", "Segunda-Feira", "Terça-Feira", "Quarta-Feira", "Quinta-Feira", "Sexta-Feira", "Sábado"};
  int i;

  while (1)
  {
    printf("\nInforme a data (dd mm aaaa):\n");
    scanf("%hhu %hhu %hu", &data.dia, &data.mes, &data.ano);

    if (data.dia == 0 && data.mes == 0 && data.ano == 0)
      break;

    if (data.dia > 31 || data.dia < 1 || data.mes > 12 || data.mes < 1)
      continue;
    
    i = CalculaDia(data);

    printf("\n%02hhu/%02hhu/%hu: %s\n", data.dia, data.mes, data.ano, diasSemana[i]);
  }

  return 0;
}

int CalculaDia(struct regData d)
{
  int a, s, diaSem;
  
  a = d.ano % 100;  // dois últimos algarismos do ano
  s = d.ano / 100;  // dois primeiros algarismos do ano

  /* Janeiro e fevereiro são os meses 11 e 12 do ano precedente, março é o mês 1 e dezembro é o mês 10 */
  if (d.mes < 3)
    d.mes += 10;
  else
    d.mes -= 2;

  /* RESTO(TRUNCA(2.6 * M – 0.1) + D + A + QUOCIENTE(A, 4) + QUOCIENTE(S, 4) – 2 * S, 7) */
  diaSem = (((int) (2.6 * d.mes - 0.1)) + d.dia + a + (a / 4) + (s / 4) - 2 * s) % 7;

  if (diaSem < 0) 
    diaSem += 7;
  
  return diaSem;
}
