#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

struct dados_livros {
char nome[200];
char autor[200];
char categoria[200];
float preco;
};

struct dados_livros livros[3];
int i;

setlocale(LC_ALL, "portuguese");

for (i = 0; i < 3; i++){
printf("Digite o nome do livro:");
gets(livros[i].nome);

printf("Digite o nome do autor:");
gets(livros[i].autor);

printf("Digite a categoria do livro:");
gets(livros[i].categoria);

printf("Digite o preço do livro:");
scanf("%f", &livros[i].preco);

fflush(stdin);

system("cls || clear");
}

for(i = 0; i < 3; i++){
printf("\nNome do livro:%s\n", livros[i].nome);
printf("Nome do autor:%s\n", livros[i].autor);
printf("Categoria do livro:%s\n", livros[i].categoria);
printf("Preço:%2.f\n", livros[i].preco);
}

getchar();

    return 0;
}