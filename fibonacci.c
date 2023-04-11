

#include <stdio.h>
#include <stdlib.h>

int calls = 0;

int fibonacci(int n)
{
  calls++;
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
  int n, x;
  scanf("%d", &n);
  int *input = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x);
    input[i] = x;
  }
  for (int c = 0; c < n; c++)
  {
    calls = 0;
    int result = fibonacci(input[c]);
    printf("fib(%d) = %d calls = %d\n", input[c], calls - 1, result);
  }
  free(input);
  return 0;
}
