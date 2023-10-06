#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float produto;
    int formaPagar;
    float desconto;
    int parcelas;
    float total;
    int pagamentoVista;
    int pagamentoPrazo;

    printf("Insira o valor do produto: \n");
    scanf("%f", &produto);

    printf("\n");

    printf("1- Pagamento � vista;");
    printf("2- Pagamento � prazo.");
    printf("Insira o n�mero referente a forma de pagamento: \n");
    scanf("%i", &formaPagar);

    system ("cls || clear");

    printf("Valor do produto: %.1f \n", produto);
    printf("Forma de pagamento: %i \n", formaPagar);

    desconto = produto * 0.1

    switch (formaPagar)
    {
    case 1 :
        total = produto - desconto;
        printf("Valor do desconto: %.1f \n ", desconto);
        break;    
    case 2 :
        printf("Parcela at� 6 vezes!");
        printf("Insira o n�mero de parcelas: ");
        scanf("%i", &parcelas);
        total = produto / parcelas;
        printf("Quantidades de parcelas escolhidas: ", parcelas);
        break;
    
    default:
    printf("N�meros de parcelas inv�lidas!");
        break;
    }

    printf("Total a pagar: %.1f \n", total)

    return 0;
}