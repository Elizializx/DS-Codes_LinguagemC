#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

struct dados_pessoais {
char nome [200];
int idade;
float peso;
float altura;
};

struct dados_pessoais pessoa;

fflush(stdin);

printf("Digite seu nome:");
gets(pessoa.nome);

printf("Digite sua idade:");
scanf("%d", &pessoa.idade);

printf("digite seu peso:");
scanf("%f", &pessoa.peso);

printf("Digite sua altura:");
scanf("%f", &pessoa.altura);

system("cls || clear");

printf("Nome:%s\n", pessoa.nome);
printf("Idade:%d\n", pessoa.idade);
printf("Peso:%2.f\n", pessoa.peso);
printf("Altura:%2.f\n", pessoa.altura);

getchar();

    return 0;
}