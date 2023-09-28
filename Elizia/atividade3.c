#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char loginSalvo[250], login[250] = "Elizia", senhaSalva[250], senha = "542005"[250];

    printf("Insira seu usuário: ");
    scanf("%s" &login );
    
    printf("Insira sua senha: ");
    scanf("%s" &senha);

    if(strcmp(login, loginSalvo == "Elizia")== 0 && strcmp(senha, senhaSalva == 542005)== 0 )
    {
        printf("BEM-VINDO!");
    }
    else
    {
        printf("LOGIN OU SENHA INVÁLIDOS!");
    }

    return 0;
}