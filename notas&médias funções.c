#include <stdlib.h> 
#include <stdio.h>
#include <locale.h>

void cabecalho(){
    
    printf("=====================\n");
    printf("      SENAI DEN      \n");
    printf("=====================\n");

}

void limparTela(){

    system("cls");

} 

	char* resultadoAprovacao (float media){
	
	char resultado[200];
	
	if (media >= 7)
    {
        strcpy(resultado, "PARABÉNS, APROVADOOOOO!");
    }
    else
    {
        strcpy(resultado, "EITA, REPROVADOOOOO!");
    }
    
    return resultado;
}

float mediaCal(int Notas[i]){

    float media;

    media = Notas[i] / 3;
    return media;

}


int main(){
    setlocale(LC_ALL, "portuguese");

    int Notas[3];
    int soma;
    float media;

    cabecalho();

	for(i = 0; i <= 3; i++){
    	
		printf("Insira a primeiro nota: ");
    	scanf("%d", &Notas[i]);
    	
		limparTela();
	}
    
	media = mediaCal(pNota, sNota, tNota);

    system("cls");

    cabecalho();

    printf("Média: %.1f \n", media);
	printf("Resultado: %s \n", resultadoAprovacao(media));
	
    return 0;
}
