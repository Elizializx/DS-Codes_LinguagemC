#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "portuguese");

  int numeros[5];
  int i;

  for(i = 0; i < 5; i++)
  {
    printf("Insira o %d° número: ", i + 1);
    scanf("%d", &numeros[i]);

    if(numeros[i] < 0)
    {
      numeros[i] = 0;
    }
  }

  for(i = 0; i < 5; i++)
  {
    printf("%d\n", numeros[i]);
  }
  
  return 0;
}