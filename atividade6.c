#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int dia;

    printf("Insira o n�mero refeterente ao dia da semana:\n");
    scanf("%d", &dia);

    printf("\n");

    switch (dia)
    {
    case 1 :
        printf("Domingo - final de semana");
        break;
    case 2 :
        printf("Segunda - Dia �til");
        break;
    case 3 :
        printf("Ter�a - Dia �til");
        break;
    case 4 :
        printf("Quarta - Dia �til");
        break;
    case 5 :
        printf("Quinta - Dia �til");
        break;
    case 6 :
        printf("Sexta - Dia �til");
        break;
    case 7 :
        printf("S�bado - Final de semana");
        break;
    default:
        printf("N�mero referente ao dia da semana inv�lido!");
        break;
    }

        return 0;
    }