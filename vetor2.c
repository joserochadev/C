#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *x, in, val = 0;

  scanf("%d", &in);
  x = (int *)malloc(1000 * sizeof(int));

  for (int c = 0; c < 1000; c++)
  {
    if (val >= in)
    {
      val = 0;
    }
    x[c] = val;
    val++;
  }

  for (int i = 0; i < 1000; i++)
  {
    printf("X[%d] = %d\n", i, x[i]);
  }

  return 0;
}