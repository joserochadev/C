// #include <stdio.h>
// #include <stdlib.h>

// int main(){

//   int n, **A, **B, **C, p, q, r, s, x, y, i;

//   scanf("%d", &n);
//   scanf("%d%d%d%d%d%d", &p, &q, &r, &s, &x, &y);

//   A = (int**) malloc(p * sizeof(int *));
//   for(i = 0; i < p; i++){
//     A[i] = (int *) malloc(q * sizeof(int));
//   }

//   B = (int**) malloc(r * sizeof(int *));
//   for(i = 0; i < r; i++){
//     A[i] = (int *) malloc(s * sizeof(int));
//   }

//   // c = (int**) malloc(p * sizeof(int *));
//   // for(i = 0; i < p; i++){
//   //   A[i] = (int *) malloc(q * sizeof(int));
//   // }

//   return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, p, q, r, s, x, y, i, j, m;
  scanf("%d %d %d %d %d %d %d", &n, &p, &q, &r, &s, &x, &y);
  scanf("%d %d", &i, &j);

  long long **a, **b, **c;

  a = (long long **)malloc(n * sizeof(long long *));
  for (m = 0; m < n; m++)
  {
    a[m] = (long long *)malloc(n * sizeof(long long));
  }

  b = (long long **)malloc(n * sizeof(long long *));
  for (m = 0; m < n; m++)
  {
    b[m] = (long long *)malloc(n * sizeof(long long));
  }

  c = (long long **)malloc(n * sizeof(long long *));
  for (m = 0; m < n; m++)
  {
    c[m] = (long long *)malloc(n * sizeof(long long));
  }

  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n; col++)
    {
      a[row][col] = (p * (row + 1) + q * (col + 1)) % x;
    }
  }

  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n; col++)
    {
      b[row][col] = (r * (row + 1) + s * (col + 1)) % y;
    }
  }

  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n; col++)
    {
      c[row][col] = 0;
      for (int k = 0; k < n; k++)
      {
        c[row][col] += a[row][k] * b[k][col];
      }
    }
  }

  printf("%lld\n", c[i - 1][j - 1]);

  return 0;
}
