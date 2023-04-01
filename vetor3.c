#include <stdio.h>
#include <stdlib.h>

int main()
{
  double *n;

  n = (double *)malloc(100 * sizeof(double));

  scanf("%lf", &n[0]);

  for (int c = 1; c <= 99; c++)
  {
    n[c] = n[c - 1] / 2.0;
  }

  for (int j = 0; j < 100; j++)
  {
    printf("N[%d] = %.4lf\n", j, n[j]);
  }

  return 0;
}
