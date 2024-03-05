#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numero;
    int quantidadeDePares = 0;
    int quantidadeDeImpares = 0;
    float contador;
    float somaDosPares = 0.0;
    float somaDosImpares = 0.0;
    float somaGeral = 0;
    float mediaDosPares = 0.0;
    float mediaDosImpares = 0.0;
    float mediaGeral = 0.0;

    do
    {
        printf("\nDigite o %.0fº número: ", contador + 1);
        scanf("%d", &numero);
        

        if (numero != 0)
        {
            somaGeral += numero;
            contador = contador + 1;

            if (numero % 2 == 0)
            {
                quantidadeDePares = quantidadeDePares + 1;
                somaDosPares += numero;
            }
            else 
            {
                quantidadeDeImpares = quantidadeDeImpares + 1;
                somaDosImpares += numero;
            }
        }

    } while (numero != 0);

    mediaGeral = somaGeral / contador;
    mediaDosPares = somaDosPares / quantidadeDePares;
    mediaDosImpares = somaDosImpares / quantidadeDeImpares;


    printf("\nQuantidade de números PARES: %d", quantidadeDePares);
    printf("\nQuantidade de números ÍMPARES: %d", quantidadeDeImpares);
    printf("\nMédia dos PARES: %.1f", mediaDosPares);
    printf("\nMédia dos IMPARES: %.1f", mediaDosImpares);
    printf("\nMédia GERAL: %.1f\n", mediaGeral);

    return 0;
}