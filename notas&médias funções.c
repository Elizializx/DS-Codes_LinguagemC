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

float mediaCal(int pNota, int sNota, int tNota){

    float media;

    media = (pNota + sNota + tNota) / 2;
    return media;

}

int main(){
    setlocale(LC_ALL, "portuguese");

    int pNota;
    int sNota;
    int tNota;
    int soma;
    float media;

    cabecalho();

    printf("Insira a primeiro nota: ");
    scanf("%d", &pNota);
    limparTela();

    printf("Insira a segunda nota: ");
    scanf("%d", &sNota);
    limparTela();

     printf("Insira a terceira nota: ");
    scanf("%d", &tNota);
    limparTela();

    media = mediaCal(pNota, sNota, tNota);

    if (media >= 7)
    {
        printf("PARAB�NS, APROVADOOOOO!");
    }
    else
    {
        printf("EITA, REPROVADOOOOO!");
    }

    system("cls");

    cabecalho();

    printf("Primeiro n�mero: %d \n", pNota);
    printf("Segundo n�mero: %d \n", sNota);
    printf("Segundo n�mero: %d \n", tNota);
    printf("M�dia: %.1f \n", media);

    return 0;
}