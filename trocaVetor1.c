#include <stdio.h>
#include <stdlib.h>

int main()
{

  int *x, in, aux;
  x = (int *)malloc(20 * sizeof(int));

  for (int i = 0; i < 20; i++)
  {
    scanf("%d", &in);
    x[i] = in;
  }

  for (int c = 0; c < 10; c++)
  {
    aux = x[c];
    x[c] = x[19 - c];
    x[19 - c] = aux;
  }

  for (int j = 0; j < 20; j++)
  {
    printf("N[%d] = %d\n", j, x[j]);
  }

  return 0;
}