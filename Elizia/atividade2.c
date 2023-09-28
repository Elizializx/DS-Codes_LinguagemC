#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1;
    int numero2;
    float media;
    float soma;
    float produto;
    float maior;
    float menor;

    printf("Insira o 1° valor inteiro: ");
    scanf("%d", &numero1);

    printf("Insira o 1° valor inteiro: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    media = soma / 2;
    produto = numero1 * numero2;

    if (numero1 > numero2) {
       maior = numero1;
       menor = numero2;
    }
    else {
        maior = numero2;
        menor = numero1;
    }
   
    printf("1° número: %.1d \n", numero1);
    printf("2° número: %.1d \n", numero2);
    printf("Média: %.1f \n", media);
    printf("Soma: %.1f \n", soma);
    printf("Produto: %.1f \n", produto);
    printf("Maior número: %.1f \n", maior);
    printf("Menor número: %.1f \n", menor);

    return 0;
}