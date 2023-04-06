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

int main()
{
  int n, p, q, r, s, x, y, i, j;
  scanf("%d %d %d %d %d %d %d", &n, &p, &q, &r, &s, &x, &y);
  scanf("%d %d", &i, &j);

  long long a[n][n], b[n][n], c[n][n];
  // Leitura e cálculo da matriz A
  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n; col++)
    {
      a[row][col] = (p * (row + 1) + q * (col + 1)) % x;
    }
  }

  // Leitura e cálculo da matriz B
  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n; col++)
    {
      b[row][col] = (r * (row + 1) + s * (col + 1)) % y;
    }
  }

  // Cálculo da matriz C
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

  // Impressão do resultado
  printf("%lld\n", c[i - 1][j - 1]);

  return 0;
}
