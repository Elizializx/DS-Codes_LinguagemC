#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> 

int main(){

    setlocale(LC_ALL, "portuguese");

    int i;

//para i de 1 ate 10 passo 1 faca

    for ( i = 1; i <= 10; i++)
    {
        printf("%d \n", i);
    }

//para i de 10 ate 1 passo -1 faca

    for ( i = 10; i >= 1; i--)
    {
        printf("%d \n", i);
    }


getchar(); //pausa no windows e linux
    return 0;
}

    