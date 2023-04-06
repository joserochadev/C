// Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão abaixo da diagonal Secundária da matriz, conforme ilustrado abaixo (área verde).

// Entrada
// A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz.

// Saída
// Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float **matriz, soma = 0, in, media;
  int n = 1, i, c, elements;
  char opr;
  // scanf("%d", &n);
  scanf(" %c", &opr);

  matriz = (float **)malloc(12 * sizeof(float *));
  for (int j = 0; j < 12; j++)
  {
    matriz[j] = (float *)malloc(12 * sizeof(float));
  }

  for (i = 0; i < 12; i++)
  {
    for (c = 0; c < 12; c++)
    {
      scanf("%f", &in);
      matriz[i][c] = in;
    }
  }

  for (i = 11; i > 0; i--)
  {
    for (c = n; c < 12; c++)
    {
      soma += matriz[i][c];
      elements++;
    }
    n++;
  }

  media = soma / elements;

  if (opr == 'S')
  {
    printf("%.1f\n", soma);
  }

  if (opr == 'M')
  {
    printf("%.1f\n", soma / 66);
  }

  return 0;
}