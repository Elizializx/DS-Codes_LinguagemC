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
};

struct dados_aluno dados[3];
int i;
int j;

for (i = 0; i < 3; i++){

fflush(stdin);

system("cls || clear");

printf("Digite o nome do %dº aluno:\n", i + 1);
gets(dados[i].nome);

printf("Digite a idade do %dº aluno:\n", i + 1);
scanf("%d", &dados[i].idade);

for (j = 0; j < 2; j++){

printf("Digite a %dº nota do %dº aluno:\n", j + 1, i + 1);
scanf("%f", &dados[i].notas[j]);

}

}

system("cls || clear");

for (i = 0; i < 3; i++){

printf("\nNome do %dº aluno:%s\n", i + 1, dados[i].nome);
printf("Idade do %dº aluno:%d\n", i + 1, dados[i].idade);
for(j = 0; j < 2; j++){
printf("%dº nota do %dº aluno:%1.f\n", j + 1, i + 1, dados[i].notas[j]);
}
}



getchar ();

return 0;
}