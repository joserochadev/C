// Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]. A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posição dentro do vetor, mostrando esta informação.

// Entrada
// A primeira linha de entrada contem um único inteiro N (1 < N < 1000), indicando o número de elementos que deverão ser lidos em seguida para o vetor X[N] de inteiros. A segunda linha contém cada um dos N valores, separados por um espaço. Vale lembrar que nenhuma entrada haverá números repetidos.

// Saída
// A primeira linha apresenta a mensagem “Menor valor:” seguida de um espaço e do menor valor lido na entrada. A segunda linha apresenta a mensagem “Posicao:” seguido de um espaço e da posição do vetor na qual se encontra o menor valor lido, lembrando que o vetor inicia na posição zero.

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int *x, n, in, i, menorValor, pos;
  scanf("%d", &n);

  x = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++)
  {
    scanf("%d", &in);
    if (i == 0)
    {
      x[i] = in;
      menorValor = in;
      pos = i;
    }
    else
    {
      x[i] = in;
      if (in < menorValor)
      {
        menorValor = in;
        pos = i;
      }
    }
  }

  printf("Menor valor: %d\nPosicao: %d\n", x[pos], pos);

  return 0;
}