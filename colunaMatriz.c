// Neste problema você deve ler um número que indica uma coluna de uma matriz na qual uma operação deve ser realizada, um caractere maiúsculo, indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso. A imagem abaixo ilustra o caso da entrada do valor 5 para a coluna da matriz, demonstrando os elementos que deverão ser considerados na operação.

// Entrada
// A primeira linha de entrada contem um número C (0 ≤ C ≤ 11) indicando a coluna que será considerada para operação. A segunda linha de entrada contém um único caractere Maiúsculo T ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz.

// Saída
// Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float **matriz, soma, in;
  int n, i, c;
  char opr;
  scanf("%d", &n);
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

  for (i = 0; i < 12; i++)
  {
    soma += matriz[i][n];
  }

  if (opr == 'S')
  {
    printf("%.1f\n", soma);
  }

  if (opr == 'M')
  {
    printf("%.1f\n", soma / 12);
  }

  return 0;
}