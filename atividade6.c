#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int dia;

    printf("Insira o número refeterente ao dia da semana:\n");
    scanf("%d", &dia);

    printf("\n");

    switch (dia)
    {
    case 1 :
        printf("Domingo - final de semana");
        break;
    case 2 :
        printf("Segunda - Dia Útil");
        break;
    case 3 :
        printf("Terça - Dia Útil");
        break;
    case 4 :
        printf("Quarta - Dia Útil");
        break;
    case 5 :
        printf("Quinta - Dia Útil");
        break;
    case 6 :
        printf("Sexta - Dia Útil");
        break;
    case 7 :
        printf("Sábado - Final de semana");
        break;
    default:
        printf("Número referente ao dia da semana inválido!");
        break;
    }

        return 0;
    }