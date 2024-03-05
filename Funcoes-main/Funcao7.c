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

int verificarImpar(int numero[])
{               
    
     int i;
     int contadorImpar = 0;

    for (i = 0; i < quantidadeDeNumeros; i++)
    {
        if (numero[i] % 2 != 0)
        {
            contadorImpar++;
        }
    }  

    return contadorImpar;
}

int verificarPar(int numero[])
{               
    
    int i;
    int contadorPar = 0;

    for (i = 0; i < quantidadeDeNumeros; i++)
    {
        if (numero[i] % 2 == 0)
        {
            contadorPar++;
        }
    }  

    return contadorPar;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero[quantidadeDeNumeros];
    int i;
    int quantidadeDePares;
    int quantidadeDeImpares;

    for (i = 0; i < quantidadeDeNumeros; i++)
    {
    printf("Digite o %dº número: ", i+1);
    scanf("%d", &numero[i]);
    }

    limpaTela();

    quantidadeDePares = verificarPar(numero);
    quantidadeDeImpares = verificarImpar(numero); 

    for (i = 0; i < quantidadeDeNumeros; i++)
    {
    printf("\n%dº número: %d", i+1,numero[i]);
    }

    espaco();
    
    printf("\nQuantidade de números PARES: %d", quantidadeDePares);  
    printf("\nQuantidade de números IMPARES: %d\n", quantidadeDeImpares);

    return 0;
}