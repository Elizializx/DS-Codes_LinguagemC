#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

float tempoDeTrabalho;
float anoNascimento;
float matricula;
char resultado[200];
float idade;

printf("Insira o número de sua matrícula: \n");
scanf("%f", &matricula);

printf("Insira seu ano de nascimento: \n");
scanf("%f", &anoNascimento);

printf("Insira quanto tempo você contribuiu para empresa: \n");
scanf("%f", &tempoDeTrabalho);

idade = 2023 - anoNascimento;

if (idade >= 65 || tempoDeTrabalho >= 30)
{
    strcpy(resultado, "Requerer aposentadoria!");
}
else
{
    strcpy(resultado, "Não requerer aposentadoria!");    
}

system ("cls || clear");

printf("Código do funcionário: %.0f \n", matricula);
printf("Idade: %.0f \n", idade);
printf("Tempo de trabalho: %.0f \n", tempoDeTrabalho);
printf("Resultado da consultado: %s \n", resultado);


    return 0;
}