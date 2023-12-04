#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

setlocale(LC_ALL,"portuguese");

struct documentos {
char nome[200];
char dataNascimento[200];
char RG[200];
char CPF[200];
};

struct documentos papeis[5];
int i;

for (i = 0; i < 5; i++){

printf("Digite o nome da %dº pessoa:\n", i + 1);
gets(papeis[i].nome);
fflush(stdin);

printf("Digite a data de nascimento da %d pessoa:\n", i + 1);
gets(papeis[i].dataNascimento);
fflush(stdin);

printf("Digite o RG da %d pessoa:\n", i + 1);
gets(papeis[i].RG);
fflush(stdin);

printf("Digite o CPF da %d pessoa:\n", i + 1);
gets(papeis[i].CPF);
fflush(stdin);

system("cls || clear");

}

for(i = 0; i < 5; i++) {

printf("\nNome da %d pessoa:%s\n", i + 1, papeis[i].nome);
printf("Data de nascimento da %d pessoa:%s\n", i + 1, papeis[i].dataNascimento);
printf("RG da %d pessoa:%s\n", i + 1, papeis[i].RG);
printf("CPF da %d pessoa:%s\n", i + 1, papeis[i].CPF);

}



getchar();

    return 0;
}