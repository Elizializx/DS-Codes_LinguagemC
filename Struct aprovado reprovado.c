#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

struct dados_aluno {
char nome[200];
int idade;
float notas[2];
float soma;
float media;
};

struct dados_aluno dados[3];
int i;
int j;

for (i = 0; i < 3; i++){

fflush(stdin);

system("cls || clear");

printf("Digite o nome do %d� aluno:\n", i + 1);
gets(dados[i].nome);

printf("Digite a idade do %d� aluno:\n", i + 1);
scanf("%d", &dados[i].idade);

for (j = 0; j < 2; j++){

printf("Digite a %d� nota do %d� aluno:\n", j + 1, i + 1);
scanf("%f", &dados[i].notas[j]);
dados[i].soma += dados[i].notas[j];
}

dados[i].media = dados[i].soma / 2;


}

system("cls || clear");

for (i = 0; i < 3; i++){

printf("\nNome do %d� aluno:%s\n", i + 1, dados[i].nome);
printf("Idade do %d� aluno:%d\n", i + 1, dados[i].idade);
for(j = 0; j < 2; j++){
printf("%d� nota do %d� aluno:%2.f\n", j + 1, i + 1, dados[i].notas[j]);
}
printf("\nM�dia:%1.f\n", dados[i].media);
if(dados[i].media >= 7,0){
    printf("\nAprovado!\n");
} else {
    printf("\nReprovado!\n");
}

}



getchar ();

return 0;
}