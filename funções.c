#include <stdlib.h> 
#include <stdio.h>

void cabecalho(){
    
    printf("=====================\n");
    printf("      SENAI DEN      \n");
    printf("=====================\n");

}

void limparTela(){

    system("cls");

} 

int main(){

    char nome[200];
    int idade;

    cabecalho();

    printf("Insira o %dº número: ");
    gets("%s", &nome);
    limparTela();

    printf("Insira seu idade: ");
    scanf("%s", &idade);
    limparTela();

    system("cls");

    cabecalho();

    printf("Insira seu nome: ");
    scanf("%s", &nome);

    printf("Insira seu idade: ");
    scanf("%s", &idade);

    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);

    return 0;
}