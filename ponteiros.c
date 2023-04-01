#include <stdio.h>

void soma_produto(int a, int b, int *c, int *d)
{
  *c = a + b;
  *d = a * b;
}

int main()
{

  int s, p;
  soma_produto(3, 5, &s, &p);
  printf("Soma: %d \nProduto: %d", s, p);

  return 0;
}