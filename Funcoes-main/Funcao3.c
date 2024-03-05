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
    printf("\t\tATIVIDADE 2");
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
    do
    {
    printf("\nDigite um número para a tabuada: ");
    scanf("%d", &n);

    if (n < 0 || n > 10)
    {
        printf("\nNúmero inválido! Digite um número entre 1 e 10.\n");
    }
    } while (n < 0 || n > 10);

    return n;
}

void mostrarDados(int numero)
{
    int i;

    printf("\nTABUADA DE %d\n",numero);
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", numero, i+1, numero*(i+1));
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
    mostrarDados(numero);
    
    return 0;
}