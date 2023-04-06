#include <stdio.h>
#include <stdlib.h>

int main()
{

  int *impar, *par, in, imparCount = 0, parCount = 0;

  impar = (int *)malloc(5 * sizeof(int));
  par = (int *)malloc(5 * sizeof(int));

  for (int i = 0; i < 15; i++)
  {
    scanf("%d", &in);

    if (in % 2 == 0)
    {
      if (parCount == 5)
      {
        parCount = 0;
        for (int c = 0; c < 5; c++)
        {
          printf("par[%d] = %d\n", c, par[c]);
        }
        free(par);
      }

      par[parCount] = in;
      parCount++;
    }
    else
    {
      if (imparCount == 5)
      {
        imparCount = 0;
        for (int j = 0; j < 5; j++)
        {
          printf("impar[%d] = %d\n", j, impar[j]);
        }
        free(impar);
      }

      impar[imparCount] = in;
      imparCount++;
    }
  }

  for (int m = 0; m < 5; m++)
  {
    printf("impar[%d] = %d\n", m, impar[m]);
  }
  for (int n = 0; n < 5; n++)
  {
    printf("impar[%d] = %d\n", n, impar[n]);
  }

  return 0;
}