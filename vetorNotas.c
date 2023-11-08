#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int notas[3];
	int i;
	
	printf("Digite as notas do Vetor:\n");
	for(i = 0; i < 5; i++){
	printf("Nota %d: ", i + 1);
	scanf("%d", &notas[i]);	
	}
	printf("\n\n");
	for(i = 0; i < 5; i++){
	printf("Notas %d: %d\n", i + 1, notas[i]);
}
    
    return 0;
}