#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
  long long *fatorial;

  fatorial = (long long *)malloc(n * sizeof(long long));

  for (int c = 0; c < n; c++)
  {
    fatorial[c] = c + 1;
  }

  for (int j = 1; j < n; j++)
  {
    fatorial[j] *= fatorial[j - 1];
  }

  return fatorial[n - 1];

  // printf("%lld\n", fatorial[n - 1]);

  free(fatorial);
}

int main()
{

  int x, y;

  scanf("%d%d", &x, &y);

  printf("%d", fatorial(x) + fatorial(y));

  return 0;
}