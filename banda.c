#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "portuguese");

	char banda [3][250];
	char integrantes [3][5][250];
	int i, j;
	
	for (i = 0; i < 3; i++) {
		printf("\nInsira o nome da banda: ");
		gets(banda[i]);
		
		for(j = 0; j < 5; j++) {
			printf("Insira o nome dos integrantes: ");
			scanf("%s",&integrantes[i][j]);	
		}
	}
	
	system("cls");
	
	for (i = 0; i < 3; i++) {
		printf("\n%dº Banda: %s \n", banda[i]);
		
		for(j = 0; j < 5; j++) {
			printf("\n%dº integrantes: %.1f \n", integrantes[i][j]);
		}
	}	
	
	return 0;
}
