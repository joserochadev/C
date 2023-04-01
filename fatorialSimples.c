#include <stdio.h>
#include <stdlib.h>

int main()
{

  int n;
  long long *fatorial;

  scanf("%d", &n);
  fatorial = (long long *)malloc(n * sizeof(long long));

  for (int c = 0; c < n; c++)
  {
    fatorial[c] = c + 1;
  }

  for (int j = 1; j < n; j++)
  {
    fatorial[j] *= fatorial[j - 1];
  }

  printf("%lld\n", fatorial[n - 1]);

  free(fatorial);

  return 0;
}
