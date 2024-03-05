#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int quantidade = 5;
    int numeros[5];
    int quantidadePares = 0;
    int quantidadeImpares = 0;
    int quantidadePositivos = 0;
    int quantidadeNegativos = 0;
    int positivos;
    int negativos;
    int somaPares = 0;
    int somaImpares = 0;
    int maior = INT_MIN;
    int menor = INT_MAX;
    float mediaPares;
    float mediaImpares;
    int somaGeral = 0;
    float mediaGeral;

    for (i = 0; i < quantidade; i++)
    {
        printf("\nDigite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);

        // CALCULANDOA SOMA GERAL

        somaGeral += numeros[i];

        // VALIDANDO NUMEROS PARES E �MPARES

        /*numeros[i] % 2 == 0 ? quantidadePares++ : quantidadeImpares++;*/

        if (numeros[i] % 2 == 0)
        {
            quantidadePares++;
            somaPares += numeros[i];
        }
        else
        {
            quantidadeImpares;
            somaImpares += numeros[i];
        }

        // VALIDANDO NUMEROS POSITIVOS E NEGATIVOS

        // numero[i] >= 0 ? quantidadePositivos++ : quantidadeNegativos++;

        if (numeros[i] > 0)
        {
            quantidadePositivos++;
        }

        if (numeros[i] < 0)
        {
            quantidadeNegativos++;
        }

        // VALIDANDO NUMEROS MAIOR E MENOR

        // maior = numeros[i] > maior ? numeros[i] : maior;

        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }

        // menor = numeros[i] < menor ? numeros[i] : menor;

        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    // CALCULANDO AS M�DIAS

    if (quantidadePares != 0)
    {
        mediaPares = (float)somaPares / (float)quantidadePares;
    }

    if (quantidadeImpares != 0)
    {
        mediaImpares = (float)somaImpares / (float)quantidadeImpares;
    }

    mediaGeral = (float)somaGeral / quantidade;

    // EXIBINDO QUANTIDADE TOTAL

    printf("\nQuantidade de n�meros: %d\n", quantidade);

    // EXIBINDO N�MEROS INFORMADOS

    printf("\nN�meros informados (Ordem Inversa): \n");

    for (i = (quantidade - 1); i >= 0; i--)
    {
        printf("\n%d", numeros[i]);
    }

    // EXIBINDO N�MEROS POSITIVOS

    printf("\n\nQuantidade de positivos: %d\n", quantidadePositivos);
    
     if (quantidadePositivos != 0)
    {
        printf("\nN�meros positivos: \n");

        for (i = 0; i <= quantidadePositivos; i++)
        {
            if (numeros[i] > 0)
            {
                printf("\n%d", numeros[i]);
            }
        }
    }

    // EXIBINDO N�MEROS NEGATIVOS

    printf("\n\nQuantidade de negativos: %d\n", quantidadeNegativos);

    if (quantidadeNegativos != 0)
    {
        printf("\nN�meros negativos: \n");

        for (i = 0; i <= quantidadeNegativos; i++)
        {
            if (numeros[i] < 0)
            {
                printf("\n%d", numeros[i]);
            }
        }
    }

    // EXIBINDO N�MERO MAIOR

    printf("\n\nN�mero maior: %d\n", maior);

    // EXIBINDO N�MERO MENOR

    printf("\nN�mero menor: %d\n", menor);

    // EXIBINDO N�MEROS PARES

    printf("\nQuantidade de pares: %d\n", quantidadePares);

    printf("\nN�meros Pares: \n");

    for (i = 0; i < quantidade; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            printf("\n%d", numeros[i]);
        }
    }

    // EXIBINDO N�MEROS IMPARES

    printf("\n\nQuantidade de Impares: %d\n", quantidadeImpares);
    printf("\nN�meros Impares: \n");

    for (i = 0; i < quantidade; i++)
    {
        if (numeros[i] % 2 != 0)
        {
            printf("\n%d", numeros[i]);
        }
    }

    // EXIBINDO SOMA TOTAL

    printf("\n\nSoma total: %d\n", somaGeral);

    // EXIBIR MEDIA DOS PARES

    printf("\nM�dia dos Pares: %.1f\n", mediaPares);

    // EXIBIR MEDIA DOS �MPARES

    printf("\nM�dia dos Impares: %.1f\n", mediaImpares);

    // EXIBIR MEDIA GERAL

    printf("\nM�dia Geral: %.1f\n", mediaGeral);

    return 0;
}