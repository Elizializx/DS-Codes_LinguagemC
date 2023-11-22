#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char disciplinas[3][200];
    float notas[3][3];
    float media[3];
    float somaNotas = 0;
    int i, j, peso[3] = {3, 3, 4};

    system("cls || clear");

    for (i = 0; i < 3; i++)
    {
        printf("\nInsira o nome da disciplina: ");
        gets(disciplinas[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Insira a nota do aluno: ", j + 1);
            scanf("%f", &notas[i][j]);

            somaNotas += notas[i][j] * peso[j];
        }
        fflush(stdin);
        media[i] = somaNotas / 10;
        somaNotas = 0;
    }

    system("cls");
    fflush(stdin);

    printf("\nExibindo as informações das disciplinas... \n");

    for (i = 0; i < 3; i++)
    {
        printf("\n%dº Disciplina: %s \n", i + 1, disciplinas[i]);

        for (j = 0; j < 3; j++)
        {
            printf("%dºNotas: %.1f \n", j + 1, notas[i][j]);
        }

        printf("\nMédia: %.1f \n", media[i]);
    }

    return 0;
}