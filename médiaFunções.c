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

float mediaCal(int pNumero, int sNumero){

    float media;

    media = (pNumero + sNumero) / 2;
    return media;

}

int main(){
    setlocale(LC_ALL, "portuguese");

    int pNumero;
    int sNumero;
    int soma;
    float media;

    cabecalho();

    printf("Insira o primeiro n�mero: ");
    scanf("%d", &pNumero);
    limparTela();

    printf("Insira o segundo n�mero: ");
    scanf("%d", &sNumero);
    limparTela();

    media = mediaCal(pNumero, sNumero);
    //soma = pNumero + sNumero;

    system("cls");

    cabecalho();

    printf("Primeiro n�mero: %d \n", pNumero);
    printf("Segundo n�mero: %d \n", sNumero);
    printf("M�dia: %.1f \n", media);

    return 0;
}