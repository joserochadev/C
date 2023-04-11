// #include <stdio.h>
// #include <stdlib.h>

// int fatorial(int n)
// {
//   long long *fatorial;

//   fatorial = (long long *)malloc(n * sizeof(long long));

//   for (int c = 0; c < n; c++)
//   {
//     fatorial[c] = c + 1;
//   }

//   for (int j = 1; j < n; j++)
//   {
//     fatorial[j] *= fatorial[j - 1];
//   }

//   return fatorial[n - 1];

//   // printf("%lld\n", fatorial[n - 1]);

//   free(fatorial);
// }

// int main()
// {

//   int x, y;

//   scanf("%d%d", &x, &y);

//   printf("%d", fatorial(x) + fatorial(y));

//   return 0;
// }

#include <stdio.h>
#include <stdlib.h>

long long fatorial(int n)
{
  long long fat = 1;
  for (int i = 1; i <= n; i++)
  {
    fat *= i;
  }
  return fat;
}

int main()
{
  int m, n;
  while (scanf("%d %d", &m, &n) != EOF)
  {
    long long *fats = (long long *)malloc(2 * sizeof(long long));
    fats[0] = fatorial(m);
    fats[1] = fatorial(n);
    printf("%lld\n", fats[0] + fats[1]);
    free(fats);
  }
  return 0;
}
