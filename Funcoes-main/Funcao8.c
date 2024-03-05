#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

#define quantidadeDeNumeros 6

void cabecalho()
{
    printf("\n===========================================\n");
    printf("\t\tATIVIDADE 6");
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

float converterMetrosParaCentimetros(float numero)
{
    return numero * 100; 
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    float numero;

    printf("Digite um número em Metros(m): ");
    scanf("%f", &numero);

    limpaTela();
    
    printf("Número em Metros(m): %.1f m", numero);  
    printf("\nEm Centímetros(cm): %.1f cm\n", converterMetrosParaCentimetros(numero));  

    return 0;
}