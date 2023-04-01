#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *numCalls, *result, num1, num2, n, *input, in;
  scanf("%d", &n);

  numCalls = (int *)malloc(n * sizeof(int));
  result = (int *)malloc(n * sizeof(int));
  input = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &in);
    result[i] = -1;
    numCalls[i] = 0;
    input[i] = in;
    num1 = 1;
    num2 = 0;
    while (result[i] <= in)
    {
      numCalls[i] = num1 + num2;
      num2 = num1;
      num1 = numCalls[i];
      result[i] += 1;
    }
  }
  for (int c = 0; c < n; c++)
  {

    printf("fib(%d) = %d calls = %d\n", input[c], numCalls[c], result[c]);
  }

  return 0;
}