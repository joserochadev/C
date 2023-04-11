// Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido. Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele. Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.

// Entrada
// A primeira linha da entrada contém um inteiro T, indicando o número de casos de teste. Cada caso de teste contém um único inteiro N (0 ≤ N ≤ 60), correspondente ao N-esimo termo da série de Fibonacci.

// Saída
// Para cada caso de teste da entrada, imprima a mensagem "Fib(N) = X", onde X é o N-ésimo termo da série de Fibonacci.

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }
  else
  {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main()
{
  int *vet, n, i, in;
  scanf("%d", &n);

  vet = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++)
  {
    scanf("%d", &in);
    vet[i] = in;
  }

  for (i = 0; i < n; i++)
  {
    printf("Fib(%d) = %d\n", vet[i], fibonacci(vet[i]));
  }

  return 0;
}