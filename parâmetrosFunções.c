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

int main(){
    setlocale(LC_ALL, "portuguese");

    int pNumero;
    int sNumero;
    int soma;

    cabecalho();

    printf("Insira o primeiro número: ");
    scanf("%d", &pNumero);
    limparTela();

    printf("Insira o segundo número: ");
    scanf("%d", &sNumero);
    limparTela();

    soma = somar(pNumero, sNumero);
    //soma = pNumero + sNumero;

    system("cls");

    cabecalho();

    printf("Primeiro número: %d \n", pNumero);
    printf("Segundo número: %d \n", sNumero);
    printf("Soma: %d \n", soma);

    return 0;
}