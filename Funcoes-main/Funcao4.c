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

    printf("\nDigite um número: ");
    scanf("%d", &n);

    return n;
}

void verificarParOuImpar(int numero)
{               

    /*Utilizando operador ternário

    numero % 2 == 0 ? printf("\nO número é PAR!\n") : printf("\nO número é ÍMPAR\n");*/
    
    if (numero % 2 == 0)
    {
        printf("\nO número é PAR!\n");
    }
    else
    {
        printf("\nO número é ÍMPAR\n");
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