#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define QSTR 100

// struct dados do paciente
typedef struct dados_paciente
{
      int cod_pac, cpf, rg, ida;
      char *nome_pac, *nome_pai, *nome_mae, *email, tel[16], *rua, *num, *bairro, *cid, *est, *comp;
} dpac, *ppac;

// protótipos das funções
ppac aloca_paciente();
void ler_paciente(ppac pcad);
void cadastra_paciente(ppac pex);
int contpac(ppac pex);
void pesqimp_paciente(ppac pex);
void tela_inicio();

int main(void)
{
      tela_inicio();
      return 0;
}

// funções
ppac aloca_paciente()
{
      ppac pp = NULL;
      pp = (ppac)malloc(sizeof(dpac));
      if (pp != NULL)
      {
            pp->nome_pac = (char *)malloc(QSTR * sizeof(char));
            pp->nome_pai = (char *)malloc(QSTR * sizeof(char));
            pp->nome_mae = (char *)malloc(QSTR * sizeof(char));
            pp->email = (char *)malloc(QSTR * sizeof(char));
            pp->rua = (char *)malloc(QSTR * sizeof(char));
            pp->num = (char *)malloc(sizeof(char));
            pp->bairro = (char *)malloc(QSTR * sizeof(char));
            pp->cid = (char *)malloc(QSTR * sizeof(char));
            pp->est = (char *)malloc(QSTR * sizeof(char));
            pp->comp = (char *)malloc(QSTR * sizeof(char));
      }
      else
      {
            printf("Paciente não alocado!");
      }
      return pp;
}
void ler_paciente(ppac pcad)
{
      int codcli = contpac(pcad);
      pcad->cod_pac = (2022000 + codcli);
      printf("NOME COMPLETO: ");
      scanf(" %[^\n]s", pcad->nome_pac);

      printf("IDADE: ");
      scanf(" %d", &pcad->ida);

      printf("RUA: ");
      scanf(" %[^\n]s", pcad->rua);

      printf("NUMERO: ");
      scanf(" %[^\n]s", pcad->num);

      printf("BAIRRO: ");
      scanf(" %[^\n]s", pcad->bairro);

      printf("CIDADE: ");
      scanf(" %[^\n]s", pcad->cid);

      printf("UC: ");
      scanf(" %[^\n]s", pcad->est);

      printf("COMPLEMENTO: ");
      scanf(" %[^\n]s", pcad->comp);

      printf("TELEFONE / CELULAR: ");
      scanf(" %[^\n]s", pcad->tel);

      printf("EMAIL: ");
      scanf(" %[^\n]s", pcad->email);
      fflush(stdin);
      getchar();
}
void cadastra_paciente(ppac pex)
{
      FILE *arq_cad;
      char *codcli = pex->nome_pac;
      arq_cad = fopen(codcli, "a");
      if (arq_cad == NULL)
      {
            printf("ATENCAO! CADASTRO NAO CONCLUIDO!\n");
      }
      else
      {
            printf("\nCADASTRO CONCLUIDO!\n\n");
      }
      fprintf(arq_cad, "-----------------------------------------------------------------\n");
      fprintf(arq_cad, "|                     PRONTUARIO CLIMEDIC                       |\n");
      fprintf(arq_cad, "-----------------------------------------------------------------\n");
      fprintf(arq_cad, "                        DADOS PACIENTE                           \n");
      fprintf(arq_cad, "_________________________________________________________________\n");
      fprintf(arq_cad, "| NOME: %s | IDADE: %d |\n| TELEFONE: %s | EMAIL: %s|\n", pex->nome_pac, pex->ida, pex->tel, pex->email);
      fprintf(arq_cad, "-----------------------------------------------------------------\n");
      fprintf(arq_cad, "                           ENDERECO                              \n");
      fprintf(arq_cad, "| RUA: %s  Nº: %s | BAIRRO: %s |\n| CIDADE: %s | UC: %s|\n", pex->rua, pex->num, pex->bairro, pex->cid, pex->est);
      fprintf(arq_cad, "-----------------------------------------------------------------\n\n\n");
      fprintf(arq_cad, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n\n");
      fclose(arq_cad);
}
void tela_inicio()
{
      int opc;
      ppac palocad;
      char op;
      printf("--------------------------------------------------------------\n");
      printf("|                         CLIMEDIC                           |\n");
      printf("--------------------------------------------------------------\n");
      printf("|  [1]CADASTRAR [2]PESQUISAR [3]EDITAR [4]EXCLUIR [9]FECHAR  |\n");
      printf("--------------------------------------------------------------\n\n");
      do
      {
            printf("O QUE DESEJA FAZER? : ");
            scanf("%d", &opc);
            switch (opc)
            {
            case 1:
                  palocad = aloca_paciente();
                  ler_paciente(palocad);
                  cadastra_paciente(palocad);
                  printf("DESEJA CONTINUAR?\nS OU N: ");
                  scanf("%c", &op);
                  printf("\n");
                  if ((op == 's') || (op == 'S'))
                  {
                        opc = 0;
                  }
                  else
                  {
                        opc = -1;
                        printf("\n\nSISTEMA ENCERRADO!");
                  }
                  printf("\n");
                  break;
            case 2:
                  pesqimp_paciente(palocad);
                  break;
            case 3:
                  break;
            case 4:
                  break;
            case 9:
                  opc = -1;
                  printf("\n\nSISTEMA ENCERRADO!\n");
                  break;
            default:
                  printf("OPCAO INVALIDA!\n\n");
                  break;
            }
      } while (opc != -1);
}

void pesqimp_paciente(ppac pex)
{
}

int contpac(ppac pex)
{
      FILE *arq_cad;
      int countp = 0;
      do
      {
            arq_cad = fopen(pex->nome_pac, "r");
            if (arq_cad != NULL)
            {
                  countp++;
            }
      } while (arq_cad != NULL);
      return countp;
}
