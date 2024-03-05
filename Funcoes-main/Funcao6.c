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

    printf("Digite o 1� n�mero: ");
    scanf("%f", &primeiroNumero);   
    
    espaco();

    printf("Digite o 2� n�mero: ");
    scanf("%f", &segundoNumero);   
    
    espaco();
    
    limpaTela();

    cabecalho();
    
    printf("\n1� N�mero: %.1f", primeiroNumero);
    printf("\n2�N�mero: %.1f", segundoNumero);
    espaco();
    printf("\nSoma: %.1f", soma(primeiroNumero, segundoNumero));
    printf("\nSubtra��o: %.1f", subtracao(primeiroNumero,segundoNumero));
    printf("\nMultiplica��o: %.1f", multiplicacao(primeiroNumero,segundoNumero));
    printf("\nDivis�o: %.1f", divisao(primeiroNumero,segundoNumero));
    espaco();
    
    return 0;
}