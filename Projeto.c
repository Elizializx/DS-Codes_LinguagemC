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
    printf("||จจจจจจจจจจจจจจMENU DE ESTOQUEจจจจจจจจจจจจจ||\n");
    printf("||                                          ||\n");
    printf("|| [1] -> Adicionar produto                 ||\n");
    printf("|| [2] -> Consultar                         ||\n");
    printf("|| [3] -> Separar                           ||\n");
    printf("|| [4] -> Remover                           ||\n");
    printf("|| [5] -> Sair                              ||\n");
    printf("||__________________________________________||\n");
    printf("''จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ''\n");
}

void menuAdicionar()
{
    printf("___________________________________________\n");
    printf("||จจจจจจจจจจOPวีES DE ADICIONARจจจจจจจจจจ||\n");
    printf("||                                       ||\n");
    printf("|| [1] -> Adicionar novo produto         ||\n");
    printf("|| [2] -> Atualizar produto existente    ||\n");
    printf("||_______________________________________||\n");
    printf("''จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ''\n");
}

void menuAdicionarNovo()
{

    printf("___________________________________________\n");
    printf("||จจจจจจจจจจจจADICIONAR NOVOจจจจจจจจจจจจจ||\n");
    printf("||                                       ||\n");
    printf("|| [1] -> Alimentos                      ||\n");
    printf("|| [2] -> Frios                          ||\n");
    printf("|| [3] -> Cosm้ticos                     ||\n");
    printf("||_______________________________________||\n");
    printf("''จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ''\n");
}

void menuAtualizarExistente()
{
    printf("___________________________________________\n");
    printf("||จจจจจจADICIONAR PRODUTO EXISTENTEจจจจจจ||\n");
    printf("||                                       ||\n");
    printf("|| [1] -> Alimentos                      ||\n");
    printf("|| [2] -> Frios                          ||\n");
    printf("|| [3] -> Cosm้ticos                     ||\n");
    printf("||_______________________________________||\n");
    printf("''จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ''\n");
}

void menuConsultar()
{
    printf("___________________________________________\n");
    printf("||จจจจจจจจจจOPวีES DE CONSULTAจจจจจจจจจจจ||\n");
    printf("||                                       ||\n");
    printf("|| [1] -> Consultar geral                ||\n");
    printf("|| [2] -> Consultar estoque espercํfico  ||\n");
    printf("||_______________________________________||\n");
    printf("''จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ''\n");
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
    printf("||จจจจจจจจจจจจจจจจจจCONSULTA GERALจจจจจจจจจจจจจจจจจจ||\n");
    printf("||                                                  ||\n");
    printf("|| -Quantidade geral em estoque: %d\n               ||\n", somaGeral);
    printf("||                                                  ||\n");
    printf("||  1. Em alimento: %d\n                            ||\n", somaAlimentos);
    printf("||  2. Em frios: %d\n                               ||\n", somaFrios);
    printf("||  3. Em cosm้ticos: %d\n                          ||\n", somaCosmeticos);
    printf("||                                                  ||\n");
    printf("||__________________________________________________||\n");
    printf("''จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ''\n");
}

void menuConsultarEspercifico()
{
    printf("___________________________________________\n");
    printf("||จจจจจCONSULTA PRODUTO ESPERCอFICOจจจจจจ||\n");
    printf("||                                       ||\n");
    printf("|| [1] -> Alimentos                      ||\n");
    printf("|| [2] -> Frios                          ||\n");
    printf("|| [3] -> Cosm้ticos                     ||\n");
    printf("||_______________________________________||\n");
    printf("''จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ''\n");
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
    printf("C๓digo: ");
    scanf("%d", &codigoMenu);
    limpatela();

    menuAdicionar();
    printf("C๓digo: ");
    scanf("%d", &codigoAdicionar);
    limpatela();

    menuAdicionarNovo();
    printf("C๓digo: ");
    scanf("%d", &codigoAdicionarNovo);
    limpatela();

    menuAtualizarExistente();
    printf("C๓digo: ");
    scanf("%d", &codigoAtualizarExistente);
    limpatela();

    menuConsultar();
    printf("C๓digo: ");
    scanf("%d", &codigoConsultar);
    limpatela();

    menuConsultarGeral();
    printf("C๓digo: ");
    scanf("%d", &codigoConsultaGeral);
    limpatela();

    menuConsultarEspercifico();
    printf("C๓digo: ");
    scanf("%d", &codigoConsultaEspercifica);
    limpatela();






    return 0;
}