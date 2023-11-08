#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int numeros[5];
	int i;
	
	printf("Digite os elementos do Vetor:\n");
	for(i = 0; i < 5; i++){
	printf("Elemento %d: ", i + 1);
	scanf("%d", &numeros[i]);	
	}
	printf("\n\n");
	for(i = 0; i < 5; i++){
	printf("Elemento %d: %d\n", i + 1, numeros[i]);
}
    
    return 0;
}