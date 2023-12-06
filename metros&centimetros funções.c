#include <stdlib.h> 
#include <stdio.h>
#include <locale.h>

void limpatela(){

    system("cls");
}

int convensao(int metros){
    int centi;

    centi = metros * 100;
    return centi;
}

int main(){
    setlocale(LC_ALL, "portuguese");

    int metros;
    int centimetros;

    printf("Insira um valor em metros: ");
    scanf("%d", &metros);

    limpatela();

    centimetros = convensao(metros);

    printf("Convensão de metros para centí­metro: \n");
    printf("\n");
    printf("Metros informado: %dm \n", metros);
    printf("Convensão em centí­metro: %dcm \n", centimetros);

    return 0;
}