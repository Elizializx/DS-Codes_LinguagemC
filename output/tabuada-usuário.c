#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> 

int main(){

    setlocale(LC_ALL, "portuguese");

    int i;
    int tabuadaNumero;

    printf("Insira um número que deseja: ");
    scanf("%d", &tabuadaNumero);

    for ( i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", i, tabuadaNumero, i*tabuadaNumero);
    }

    return 0;
}