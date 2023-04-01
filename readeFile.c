#include <stdio.h>
#include <string.h>

int main()
{

  char produto[30];
  char dados[30];
  // char diretorio[50];
  FILE *arquivo;

  scanf("%s", produto);

  char diretorio[50] = "./";

  strcat(diretorio, produto);
  strcat(diretorio, ".txt");

  arquivo = fopen(diretorio, "rt");
  // fscanf(arquivo, "%s", dados);

  if (arquivo == NULL)
  {
    printf("Erro na abertura do arquivo.\n");
  }
  else
  {
    while (fscanf(arquivo, "%s", dados) != EOF)
    {
      printf("%s\n", dados);
    }
  }

  // printf("%s", arquivo);

  return 0;
}

// void pesquisarFuncionario(){
//   char fName[50];
//   char *fDados = malloc(100 * sizeof(char));
//   char diretorio[50] = "./";

//   FILE *arquivo;

//   printf("QUAL O NOME DO FUNCIONARIO?\n");
//   scanf("%s", fName);

//   strcat(diretorio, fName);
//   strcat(diretorio, ".txt");

//   arquivo = fopen(diretorio, "rt");

//   if(arquivo == NULL){
//     printf("ERRO!! Funcionario nao encontrado.\n\n");
//   }else{
//     while(fscanf(arquivo, "%s", fDados) != EOF){
//       printf("%s\n", fDados);
//     }
//   }

//   system("pause");

// }
