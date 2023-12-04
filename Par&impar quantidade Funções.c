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

void parImpar(int nmr[]){
    int par = 0, impar = 0;
    int i;

for ( i = 0; i < 6; i++)
{
    if (nmr[i] % 2 == 0)
    {
        par++;
    }
    else
    {
        impar++;
    }
}
    printf("Quantidade de par: %d \n", par);
    printf("Quantidade de ímpar: %d \n", impar);
}

int main(){
    setlocale(LC_ALL, "portuguese");

    int nmr[6];
    int par;
    int impar;
    int i;

    cabecalho();

    for ( i = 0; i < 6; i++)
    {
    printf("Insira um número: ");
    scanf("%d", &nmr[i]);    
    }

    limparTela();

    cabecalho();
    
    printf("\n");
    parImpar(nmr);

    return 0;
}