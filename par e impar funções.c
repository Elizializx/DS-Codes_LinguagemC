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
        printf("Este n�mero � par!");
    }
    else
    {
        printf("Este n�mero � �mpar!");
    }

}

int main(){
    setlocale(LC_ALL, "portuguese");

    int nmr;

    cabecalho();

    printf("\n");

    printf("Insira um n�mero � baixo para saber se � �mpar ou par.\n");
    printf("\n");
    sleep(1);
    printf("Insira um n�mero: ");
    scanf("%d", &nmr);
    limparTela();

    cabecalho();
    
    printf("\n");
    printf("N�mero insirido: %d \n", nmr);
    parImpar(nmr);

    return 0;
}