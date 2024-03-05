#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

#define quantidadeNumeros 2

void cabecalho()
{
    printf("\n===========================================\n");
    printf("\t\tATIVIDADE 5");
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


float soma (float n1, float n2)
{               
    return n1 + n2;
}

float subtracao (float n1, float n2)
{               
    return n1 - n2;
}

float multiplicacao (float n1, float n2)
{               
    return n1 * n2;
}

float divisao (float n1, float n2)
{               
    return n1 / n2;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    float primeiroNumero;
    float segundoNumero;

    cabecalho();
    espaco();

    printf("Digite o 1º número: ");
    scanf("%f", &primeiroNumero);   
    
    espaco();

    printf("Digite o 2º número: ");
    scanf("%f", &segundoNumero);   
    
    espaco();
    
    limpaTela();

    cabecalho();
    
    printf("\n1º Número: %.1f", primeiroNumero);
    printf("\n2ºNúmero: %.1f", segundoNumero);
    espaco();
    printf("\nSoma: %.1f", soma(primeiroNumero, segundoNumero));
    printf("\nSubtração: %.1f", subtracao(primeiroNumero,segundoNumero));
    printf("\nMultiplicação: %.1f", multiplicacao(primeiroNumero,segundoNumero));
    printf("\nDivisão: %.1f", divisao(primeiroNumero,segundoNumero));
    espaco();
    
    return 0;
}