// Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares. Só que o tamanho de cada um dos dois vetores é de 5 posições. Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.

// Entrada
// A entrada contém 15 números inteiros.

// Saída
// Imprima a saída conforme o exemplo abaixo.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, *par, *impar;
  int i_par = 0, i_impar = 0;

  par = (int *)malloc(5 * sizeof(int));
  impar = (int *)malloc(5 * sizeof(int));

  for (int i = 0; i < 15; i++)
  {
    scanf("%d", &num);

    if (num % 2 == 0)
    {
      par[i_par] = num;
      i_par++;
    }
    else
    {
      impar[i_impar] = num;
      i_impar++;
    }

    if (i_par == 5)
    {
      for (int j = 0; j < 5; j++)
      {
        printf("par[%d] = %d\n", j, par[j]);
      }
      i_par = 0;
    }

    if (i_impar == 5)
    {
      for (int j = 0; j < 5; j++)
      {
        printf("impar[%d] = %d\n", j, impar[j]);
      }
      i_impar = 0;
    }
  }

  for (int i = 0; i < i_impar; i++)
  {
    printf("impar[%d] = %d\n", i, impar[i]);
  }

  for (int i = 0; i < i_par; i++)
  {
    printf("par[%d] = %d\n", i, par[i]);
  }

  return 0;
}
