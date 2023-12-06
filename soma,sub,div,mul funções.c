#include <stdlib.h> 
#include <stdio.h>
#include <locale.h>

void cabecalho(){
    
    printf("=====================\n");
    printf("      SENAI DEN      \n");
    printf("=====================\n");

}

void limparTela(){

    system("cls");

} 

int somar(int pNumero, int sNumero){

    int somaNmrs;

    somaNmrs = pNumero + sNumero;
    return somaNmrs;

}

int multiplicar (int pNumero, int sNumero)
{
    int multiNmrs;

    multiNmrs = pNumero * sNumero;
    return multiNmrs;
}

int dividir (int pNumero, int sNumero)
{
    int diviNmrs;

    diviNmrs = pNumero / sNumero;
    return diviNmrs;
}

int subtrair (int pNumero, int sNumero)
{
    int subNmrs;

    subNmrs = pNumero - sNumero;
    return subNmrs;
}

int main(){
    setlocale(LC_ALL, "portuguese");

    int pNumero;
    int sNumero;
    int soma;
    int multiplicacao;
    int divisao;
    int subtracao;

    cabecalho();

    printf("\n");

    printf("Insira o primeiro número: ");
    scanf("%d", &pNumero);
    limparTela();

    printf("Insira o segundo número: ");
    scanf("%d", &sNumero);
    limparTela();

    soma = somar(pNumero, sNumero);

    multiplicacao = multiplicar(pNumero, sNumero);

    divisao = dividir(pNumero, sNumero);

    subtracao = subtrair(pNumero, sNumero);

    system("cls");

    printf("Calculando informações.\n");
    sleep(1);
    limparTela();
    printf("Calculando informações..\n");
    sleep(1);
    limparTela();
    printf("Calculando informações...\n");
    limparTela();

    cabecalho();

    printf("\n");
    printf("Primeiro número: %d \n", pNumero);
    printf("Segundo número: %d \n", sNumero);
    printf("\n");
    printf("Soma: %d \n", soma);
    printf("Multiplicação: %d \n", multiplicacao);
    printf("Divisão: %d \n", divisao);
    printf("Subtração: %d \n", subtracao);

    return 0;
}