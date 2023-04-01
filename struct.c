#include <stdio.h>
#include <stdlib.h>

typedef struct person
{
  char name[21];
  int yearsOld;
} P;

int main()
{

  P user;

  printf("digite seu nome: ");
  scanf("%s", &user.name);
  printf("digite sua idade: ");
  scanf("%d", &user.yearsOld);

  printf("seu nome e: %s\nsua idade e: %d\n", user.name, user.yearsOld);

  system("pause");

  return 0;
}