#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int quantidade;
    float valor;

    printf("MA��S - DE 12 UNIDADES : 1.30un\n");
    printf("MA��S + DE 12 UNIDADES : 1.00un\n");
    printf("Insira a quantidade de ma��s: \n");
    scanf("%d", &quantidade);

    if (quantidade < 12)
    {
        valor = quantidade * 1.30;
    }
    else
    {
        valor = quantidade * 1.00;
    }

    printf("Valor a pagar: %.2f", valor);

    return 0;
}




