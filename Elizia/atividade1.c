#include <stdio.h>
#include <stdlib.h>

int main() {

    char nome[250];
    float idade;
    float nota1;
    float nota2;
    float nota3;
    float media = 0;
    float soma;

printf("Insira nome do aluno: ");
scanf("%s", &nome);

printf("Insira idade do aluno: ");
scanf("%f", &idade);

printf("Insira 1° nota: ");
scanf("%f", &nota1);

printf("Insira 2° nota: ");
scanf("%f", &nota2);

printf("Insira 3° nota: ");
scanf("%f", &nota3);

soma = nota1 + nota2 + nota3;
media = soma / 3;

if (media >= 7)    
{
    printf("APROVADOOOOOOO! \n");
}
else if (media < 7)
{
    printf("REPROVADOOOOOOO! \n");
}

printf("Média: %.1f \n", media);

return 0;
}