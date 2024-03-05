#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

#define quantidadeNumeros 6

void cabecalho()
{
    printf("\n===========================================\n");
    printf("\t\tATIVIDADE 4");
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


void verificarParOuImpar(int numero[quantidadeNumeros])
{               
    int i;
    int quantidadePares = 0;
    int quantidadeImpares = 0;
    
    for (i = 0; i < quantidadeNumeros; i++)
    {
        if (numero[i] % 2 == 0)
        {
            quantidadePares++;
        }
        else
        {
            quantidadeImpares++;
        }
    }

    printf("Quantidade de PARES: %d\n",quantidadePares);
    printf("Quantidade de IMPARES: %d\n",quantidadeImpares);

}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero [quantidadeNumeros];
    int i;
    int quantidadePares;
    int quantidadeImpares;

    cabecalho();
    espaco();

    for (i = 0; i < quantidadeNumeros; i++)
    {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numero[i]);   
        espaco();
    }
    
    limpaTela();

    cabecalho();
    espaco();
    verificarParOuImpar(numero); 
    
    return 0;
}