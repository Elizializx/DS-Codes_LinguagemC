#include <stdlib.h> 
#include <stdio.h>
#include <locale.h>
#include <string.h>

void cabecalho() {
    printf("=====================\n");
    printf("      SENAI DEN      \n");
    printf("=====================\n");
}

void limparTela() {
    system("cls");
} 

char* resultadoAprovacao(float media){
    char resultado[200];
    
    if (media >= 7) 
	{
        printf(resultado, "PARABÉNS, APROVADOOOOO!");
    } 
	else 
	{
        printf(resultado, "EITA, REPROVADOOOOO!");
    }
    
    return resultado;
}

float mediaCal(int Notas[]) {
	
    float media = (Notas[0] + Notas[1] + Notas[2]) / 3;
    return media;
}

int main() {
    setlocale(LC_ALL, "portuguese");

    int Notas[3];
    float media;

    cabecalho();

    for (int i = 0; i < 3; i++) {
        printf("Insira a %dª nota: ", i + 1);
        scanf("%d", &Notas[i]);
        limparTela();
    }

    media = mediaCal(Notas);

    limparTela();
    cabecalho();

    printf("Média: %.1f\n", media);
    printf("Resultado: %s\n", resultadoAprovacao(media));

    return 0;
}

