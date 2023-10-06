#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

//variavel
char sinal;
int a,b;
float resultado;

//Adquirindo dados
printf ("Digite o sinal desejado: ");
scanf ("%c", &sinal);

printf ("Digite o primeiro valor: ");
scanf ("%i", &a);

printf ("Digite o segundo valor: ");
scanf ("%i", &b);

//operacao
switch (sinal)
{
case '+' :
    resultado = a + b; 
    break;
case '*' :
    resultado = a * b; 
    break;
case '-' :
    resultado = a - b; 
    break;
case '/' :
    resultado = a / b; 
    break;

default:
 printf("Sinal invalido");
    break;
}


printf ("operacao escolhida: %c \n", sinal);
printf ("resultado: %.1f \n", resultado);





return 0;
}