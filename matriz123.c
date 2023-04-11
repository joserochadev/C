// Leia um valor inteiro N que é o tamanho da matriz que deve ser impressa conforme o modelo fornecido.

// Entrada
// A entrada contém vários casos de teste e termina com EOF. Cada caso de teste é composto por um único inteiro N (3 ≤ N < 70), que determina o tamanho (linhas e colunas) de uma matriz que deve ser impressa.

// Saída
// Para cada N lido, apresente a saída conforme o exemplo fornecido.

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int n, i, c;
  int **matriz;
  while (scanf("%d", &n) != EOF)
  {
    matriz = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
      matriz[i] = (int *)malloc(n * sizeof(int));
    }

    for (i = 0; i < n; i++)
    {
      for (c = 0; c < n; c++)
      {
        if (i + c == n - 1)
        {
          matriz[i][c] = 2;
        }
        else if (i == c)
        {
          matriz[i][c] = 1;
        }
        else if (i == n / 2 && c == n / 2)
        {
          matriz[i][c] = 2;
        }
        else
        {
          matriz[i][c] = 3;
        }
      }
    }

    for (i = 0; i < n; i++)
    {
      for (c = 0; c < n; c++)
      {
        printf("%d", matriz[i][c]);
      }
      printf("\n");
    }

    for (i = 0; i < n; i++)
    {
      free(matriz[i]);
    }
    free(matriz);
  }

  return 0;
}
