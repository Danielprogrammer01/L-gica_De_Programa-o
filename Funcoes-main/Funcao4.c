#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

void cabecalho()
{
    printf("\n===========================================\n");
    printf("\t\tATIVIDADE 3");
    printf("\n===========================================\n");
}

void espaco()
{
    printf("\n");
}

void limpaTela()
{
    fflush(stdin);
    system("cls || clear");
}

int armazenarDados(int n)
{

    printf("\nDigite um n�mero: ");
    scanf("%d", &n);

    return n;
}

void verificarParOuImpar(int numero)
{               

    /*Utilizando operador tern�rio

    numero % 2 == 0 ? printf("\nO n�mero � PAR!\n") : printf("\nO n�mero � �MPAR\n");*/
    
    if (numero % 2 == 0)
    {
        printf("\nO n�mero � PAR!\n");
    }
    else
    {
        printf("\nO n�mero � �MPAR\n");
    }

}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;

    cabecalho();
    numero = armazenarDados(numero);
    limpaTela();

    cabecalho();
    verificarParOuImpar(numero);
    
    return 0;
}