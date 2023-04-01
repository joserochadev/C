#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *x, in;

  x = (int *)malloc(10 * sizeof(int));

  for (int c = 0; c < 10; c++)
  {
    scanf("%d", &in);
    if (in <= 0)
    {
      x[c] = 1;
    }
    else
    {
      x[c] = in;
    }
  }

  for (int i = 0; i < 10; i++)
  {
    printf("X[%d] = %d\n", i, x[i]);
  }

  return 0;
}