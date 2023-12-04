#include <stdlib.h> 
#include <stdio.h>
#include <locale.h>
#include <time.h>

void cabecalho(){
    
    printf("=====================\n");
    printf("      SENAI DEN      \n");
    printf("=====================\n");

}

void limparTela(){

    system("cls");

} 

void parImpar(int nmr){

    if (nmr % 2 == 0)
    {
        printf("Este número é par!");
    }
    else
    {
        printf("Este número é ímpar!");
    }

}

int main(){
    setlocale(LC_ALL, "portuguese");

    int nmr;

    cabecalho();

    printf("\n");

    printf("Insira um número à baixo para saber se é ímpar ou par.\n");
    printf("\n");
    sleep(1);
    printf("Insira um número: ");
    scanf("%d", &nmr);
    limparTela();

    cabecalho();
    
    printf("\n");
    printf("Número insirido: %d \n", nmr);
    parImpar(nmr);

    return 0;
}