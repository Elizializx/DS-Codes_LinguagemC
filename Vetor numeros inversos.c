#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "portuguese");

  int i;
  int valor[6];
  
    printf("À baixo insira 6 números inteiros, positivo e pares.\n");
    sleep(1);

  for(i = 0; i < 6; i++)
  {
    printf("Insira: ", i + 1);
    scanf("%d", &valor[i]);
  
    while(valor[i] % 2 == 1 || valor[i] < 0)
    {
      printf("\nO %d° valor digitado é negativo ou ímpar, porfavor insirir novamente!\n", i + 1);
      sleep(1);
      printf("Insira: ", i + 1);
      scanf("%d", &valor[i]);
    }
  }

  printf("\n");

  system("cls");

  printf("Valores em ordem invertidas: \n");

  for(i = 5; i >= 0; i--)
  {
    printf("%d\n", valor[i]);
  }

    return 0;
}