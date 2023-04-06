#include <stdio.h>
#include <stdlib.h>

int rafaelFunc(int x, int y)
{
  return (3 * x) * (3 * x) + (y * y);
}

int betoFunc(int x, int y)
{
  return 2 * (x * x) + ((5 * y) * (5 * y));
}

int carlosFunc(int x, int y)
{
  return -100 * x + (y * y * y);
}

int main()
{

  int n, i, x, y;
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    scanf("%d%d", &x, &y);

    if (rafaelFunc(x, y) > betoFunc(x, y) && rafaelFunc(x, y) > carlosFunc(x, y))
    {
      printf("Rafael ganhou\n");
    }
    else if (betoFunc(x, y) > rafaelFunc(x, y) && betoFunc(x, y) > carlosFunc(x, y))
    {
      printf("Beto ganhou\n");
    }
    else if (carlosFunc(x, y) > betoFunc(x, y) && carlosFunc(x, y) > rafaelFunc(x, y))
    {
      printf("Carlos ganhou\n");
    }
  }

  return 0;
}