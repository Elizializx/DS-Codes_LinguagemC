#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define MAX_PRODUTOS 250

int i;

struct produtoInfos
{
    char nome[200];
    int quantidade;
};

void menuEstoque()
{
    printf("______________________________________________\n");
    printf("||��������������MENU DE ESTOQUE�������������||\n");
    printf("||                                          ||\n");
    printf("|| [1] -> Adicionar produto                 ||\n");
    printf("|| [2] -> Consultar                         ||\n");
    printf("|| [3] -> Separar                           ||\n");
    printf("|| [4] -> Remover                           ||\n");
    printf("|| [5] -> Sair                              ||\n");
    printf("||__________________________________________||\n");
    printf("''������������������������������������������''\n");
}

void menuAdicionar()
{
    printf("___________________________________________\n");
    printf("||����������OP��ES DE ADICIONAR����������||\n");
    printf("||                                       ||\n");
    printf("|| [1] -> Adicionar novo produto         ||\n");
    printf("|| [2] -> Atualizar produto existente    ||\n");
    printf("||_______________________________________||\n");
    printf("''���������������������������������������''\n");
}

void menuAdicionarNovo()
{

    printf("___________________________________________\n");
    printf("||������������ADICIONAR NOVO�������������||\n");
    printf("||                                       ||\n");
    printf("|| [1] -> Alimentos                      ||\n");
    printf("|| [2] -> Frios                          ||\n");
    printf("|| [3] -> Cosm�ticos                     ||\n");
    printf("||_______________________________________||\n");
    printf("''���������������������������������������''\n");
}

void menuAtualizarExistente()
{
    printf("___________________________________________\n");
    printf("||������ADICIONAR PRODUTO EXISTENTE������||\n");
    printf("||                                       ||\n");
    printf("|| [1] -> Alimentos                      ||\n");
    printf("|| [2] -> Frios                          ||\n");
    printf("|| [3] -> Cosm�ticos                     ||\n");
    printf("||_______________________________________||\n");
    printf("''���������������������������������������''\n");
}

void menuConsultar()
{
    printf("___________________________________________\n");
    printf("||����������OP��ES DE CONSULTA�����������||\n");
    printf("||                                       ||\n");
    printf("|| [1] -> Consultar geral                ||\n");
    printf("|| [2] -> Consultar estoque esperc�fico  ||\n");
    printf("||_______________________________________||\n");
    printf("''���������������������������������������''\n");
}

void menuConsultarGeral()
{
    int somaGeral = 0;
    int somaAlimentos = 0;
    int somaFrios = 0;
    int somaCosmeticos = 0;

    struct produtoInfos alimento[MAX_PRODUTOS];
    struct produtoInfos frios[MAX_PRODUTOS];
    struct produtoInfos cosmeticos[MAX_PRODUTOS];

    for (i = 0; i < MAX_PRODUTOS; i++)
    {
        somaGeral += alimento[i].quantidade + frios[i].quantidade + cosmeticos[i].quantidade;

        somaAlimentos += alimento[i].quantidade;
        somaFrios += frios[i].quantidade;
        somaCosmeticos += cosmeticos[i].quantidade;
    }

    printf("______________________________________________________\n");
    printf("||������������������CONSULTA GERAL������������������||\n");
    printf("||                                                  ||\n");
    printf("|| -Quantidade geral em estoque: %d\n               ||\n", somaGeral);
    printf("||                                                  ||\n");
    printf("||  1. Em alimento: %d\n                            ||\n", somaAlimentos);
    printf("||  2. Em frios: %d\n                               ||\n", somaFrios);
    printf("||  3. Em cosm�ticos: %d\n                          ||\n", somaCosmeticos);
    printf("||                                                  ||\n");
    printf("||__________________________________________________||\n");
    printf("''��������������������������������������������������''\n");
}

void menuConsultarEspercifico()
{
    printf("___________________________________________\n");
    printf("||�����CONSULTA PRODUTO ESPERC�FICO������||\n");
    printf("||                                       ||\n");
    printf("|| [1] -> Alimentos                      ||\n");
    printf("|| [2] -> Frios                          ||\n");
    printf("|| [3] -> Cosm�ticos                     ||\n");
    printf("||_______________________________________||\n");
    printf("''���������������������������������������''\n");
}

void limpatela()
{

    system("cls");
}

void tempo()
{
    sleep(1);
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int codigoMenu; 
    int codigoAdicionar;
    int codigoAdicionarNovo;
    int codigoAtualizarExistente;
    int codigoConsultar;
    int codigoConsultaGeral;
    int codigoConsultaEspercifica;
    int codigoSeparar;
    int codigoRemover;

    menuEstoque();
    printf("C�digo: ");
    scanf("%d", &codigoMenu);
    limpatela();

    menuAdicionar();
    printf("C�digo: ");
    scanf("%d", &codigoAdicionar);
    limpatela();

    menuAdicionarNovo();
    printf("C�digo: ");
    scanf("%d", &codigoAdicionarNovo);
    limpatela();

    menuAtualizarExistente();
    printf("C�digo: ");
    scanf("%d", &codigoAtualizarExistente);
    limpatela();

    menuConsultar();
    printf("C�digo: ");
    scanf("%d", &codigoConsultar);
    limpatela();

    menuConsultarGeral();
    printf("C�digo: ");
    scanf("%d", &codigoConsultaGeral);
    limpatela();

    menuConsultarEspercifico();
    printf("C�digo: ");
    scanf("%d", &codigoConsultaEspercifica);
    limpatela();






    return 0;
}