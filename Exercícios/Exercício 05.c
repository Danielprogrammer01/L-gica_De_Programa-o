#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"portuguese");   

    char loginCadastrado[250];
    char login[250];
    char senhaCadastrada[250];
    char senha[250];

    printf("CADASTRO \n");
    
    printf("\nLOGIN: ");
    gets(loginCadastrado);
    
    printf("\nSENHA: ");
    gets(senhaCadastrada);

    system ("cls || clear");

    printf("ACESSO AO SITE \n");
    
    printf("\nLOGIN: ");
    gets(login);
    
    printf("\nSENHA: ");
    gets(senha);

    //strcmp (Stringcompare) - COMPARAÇÃO ENTRE VARIÁVEIS.

    if (strcmp(login, loginCadastrado) == 0 && strcmp(senha, senhaCadastrada) == 0)
    {
        printf("\nBem-Vindo!");
    }
    else
    {
        printf("\nAcesso Negado! Login e(ou) senha inv�lidos.");
    }

return 0;

}