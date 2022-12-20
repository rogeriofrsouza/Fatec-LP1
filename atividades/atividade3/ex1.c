/*
  Exercício 1
*/
#include <stdio.h>

int main(void)
{
  int i, x = 4, w = 9, q;

  for (i = -1; i < 20; i += 3)
  {
    x++;

    for (q = 4; q < 11; q++)
    {
      do
      {
        i = +3;
        w = sizeof(i);
        i = x + w;
        x = w + i;
      } while (x < 15);
    }
  }

  printf("x: %d, i: %d", x, i);  // x: 69, i: 68
}
