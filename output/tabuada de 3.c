#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> 

int main(){

    setlocale(LC_ALL, "portuguese");

    int i;
    int j;

    for ( j = 3; j <= 7; j+=2)
    {
        for ( i = 1; i <= 10; i++){    
        printf("%d x %d = %d \n", j, i, i*j);
    }
        printf("\n");
    }
        


getchar();
    return 0;
}