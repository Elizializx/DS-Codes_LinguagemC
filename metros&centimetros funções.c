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

    printf("Convens�o de metros para cent�metro: \n");
    printf("\n");
    printf("Metros informado: %dm \n", metros);
    printf("Convens�o em cent�metro: %dcm \n", centimetros);

    return 0;
}