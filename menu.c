#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int opcao;





    printf("-----------------------------");
    printf("            MENU             ");
    printf("-----------------------------");
    printf("\n");
    printf("1-    Picanha     -> R$ 25,00");
    printf("2-    Lasanha     -> R$ 20,00");
    printf("3-   Strogonoff   -> R$ 18,00");
    printf("4- Bife Acebolado -> R$ 15,00");
    printf("5-  P�o com ovo   -> R$ 5,00");
    printf("-----------------------------");
    printf("\n");
    printf("Insira o n�mero da refei��o desejada:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1 :
       printf("C�digo: 1");
       printf("Prato: Picanha");
       printf("Pre�o: R$25,00");
        break;
    case 1 :
       printf("C�digo: 2");
       printf("Prato: Lasanha");
       printf("Pre�o: R$20,00")
        break;
    case 1 :
       printf("C�digo: 3");
       printf("Prato: Strogonoff");
       printf("Pre�o: R$18,00")
        break;
    case 1 :
       printf("C�digo: 1");
       printf("Prato: Picanha");
       printf("Pre�o: R$25,00")
        break;
    case 1 :
       printf("C�digo: 1");
       printf("Prato: Picanha");
       printf("Pre�o: R$25,00")
        break;
    
    default:
        break;
    }


    
    
    
    
    
    
    return 0;
}