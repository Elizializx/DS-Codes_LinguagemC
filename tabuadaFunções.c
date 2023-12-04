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

void tabuada(int nmr){

    int i;

    for ( i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", nmr, i, nmr * i);
    }

}

int main(){
    setlocale(LC_ALL, "portuguese");

    int nmr;
    int i;

    cabecalho();

    printf("Insira o número para tabuada: ");
    scanf("%d", &nmr);
    limparTela();

    cabecalho();
    
    tabuada(nmr);

    return 0;
}