#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

void cabecalho()
{

    printf("----------CONTATO----------\n");
}

void limpatela()
{

    system("cls");
}

struct contato_dados
{
    char nome[200];
    char telefone[200];
    char email[200];
};

void procurar_contato(struct contato_dados *contato, char *procurar)
{
    int i;

    for (i = 0; i < 3; i++)
    {

        if (strcmp(procurar, contato[i].nome) == 0)
        {
            printf("Nome: %s \n");
            printf("Telefone: %s \n");

            return;
        }
        else
        {
            for (i = 1; i < 2; i++)
            {
                printf("Contato não encontrado.\n");
            }
        }
    }

    int opcao3;
    int opcao4;

    printf("\nDeseja voltar ao menu?\n ");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    scanf("%d", &opcao3);

    limpatela();

    switch (opcao3)
    {
    case 1:

        printf("1 - Procurar contato.\n");
        printf("2 - Sair\n");
        scanf("%d", &opcao4);
        fflush(stdin);

        switch (opcao4)
        {
        case 1:

            limpatela();

            printf("Insira o nome do contato: ");
            gets(procurar);

            limpatela();

            procurar_contato(contato, procurar);

            break;

        default:
            return 0;
            break;
        }

    default:
        return 0;
        break;
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct contato_dados contato[3];

    int opcao1;
    int opcao2;
    char procurar[200];

    printf("Deseja cadastrar/salvar algum contato?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    scanf("%d", &opcao1);

    limpatela();

    int i;

    switch (opcao1)
    {
    case 1:
        cabecalho();

        printf("\nCadastre 3 contatos à baixo.\n");
        sleep(1);

        int j;

        for (i = 0; i < 3; i++)
        {

            fflush(stdin);

            printf("Nome do contato: \n", i + 1);
            scanf("%s", &contato[i].nome);

            printf("Telefone: \n", i + 1);
            scanf("%s", &contato[i].telefone);

            printf("Email: \n", i + 1);
            scanf("%s", &contato[i].email);

            limpatela();
        }

        limpatela();

        break;

    case 2:
        return 0;
        break;

    default:
        printf("Opção inválida!");
        break;
    }

    fflush(stdin);

    printf("Deseja procurar algum contato?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    scanf("%d", &opcao2);

    fflush(stdin);
    limpatela();

    switch (opcao2)
    {
    case 1:

        printf("Insira o nome do contato: ");
        gets(procurar);

        limpatela();

        procurar_contato(contato, procurar);

    case 2:
        return 0;
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}