#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "portuguese");

  int i;
  int valor[5];
  int funcoes;
  int par = 0;
  int impar;
  int positivo = 0;
  int negativo = 0;
  int maior = 0;
  int menor = 999999999;
  int totalvalor;
  int totalpar;
  int totalimpar;
  float mediapar = 0;
  float mediaimpar = 0;
  float mediatotal = 0;
  float mediapar = 0;
  float mediaimpar = 0;


    printf("À baixo você irá insirir 5 valores para utilizar nossas 8 funções.\n");
    printf("\nGostaria de analizar as nossas 8 funções?\n");
    printf("1- Sim");
    printf("2- Não");
    scanf("%d", &funcoes);

    switch (funcoes)
    {
      case 1:
        printf("Funções: \n");
        printf("1. A quatidade de números pares e ímpares;\n");
        printf("2. A quatidade de números positivos e negativos;\n");
        printf("3. A quatidade de números insiridos;\n");
        printf("4. O maior e o menor número;\n");
        printf("5. A média de números pares;\n");
        printf("6. A média de números ímpares;\n");
        printf("7. A média de todos os números inseridos;\n");
        printf("8. Mostrar os números lidos na ordem inversa.;\n");
        printf("\n");
        sleep(1);
        printf("Agora insira 5 valores, para prosseguir com o programa.\n");
       
        for (i = 0; i < 5; i++)
        {
          printf("Insira: ");
          scanf("%d", &valor[i]);

          system("cls");

          totalvalor += valor[i];
        }
        break;
          
      default:
        return 0;
        break;
    }

     if (valor[i] % 2 == 0)
        {
            par++;
            totalpar += valor[i];
        }
        else
        {
            impar++;
            totalimpar += valor[i];
        }

      if (valor[i] > 0)
        {
            positivo++;
        }
        else if (valor[i] < 0)
        {
            negativo++;
        }

      if (valor[i] > maior)
        {
            positivo++;
        }
        else if (valor[i] < 0)
        {
            negativo++;
        }

      if (valor[i] > maior)
        {
            maior = valor[i];
        }
        else if (valor[i] < menor)
        {
            menor = valor[i];
        }

      mediapar = totalpar / par;
      mediaimpar = totalimpar / impar;
      mediatotal = totalvalor / 5;

      system("Cls");

      printf("1. Quatidade de pares: %d \n", par);
      printf("   Quatidade de ímpares: %d \n", impar);
      printf("\n");
      printf("2. Quatidade de positivos: %d \n", positivo);
      printf("   Quatidade de negativos: %d \n", negativo);
      printf("\n");
      printf("3. A quatidade de números insiridos: 5\n");
      printf("\n");
      printf("4. O maior número: %d\n", maior);
      printf("   O menor número: %d\n", menor);
      printf("\n");
      printf("5. Média dos números pares: %.1f\n", mediapar);
      printf("6. Média dos números ímpares: %.1f\n", mediaimpar);
      printf("7. A média de todos os números inseridos: %.1f\n", mediatotal);
      printf("8. Números lidos na ordem inversa: \n");

      for(i = 0; i < 5; i--)
      {
        printf("%d\n", valor[i]);
      }

    return 0;
}