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
    int quantidade = 6;
    int numeros[quantidade];
    int quantidadePares;
    int quantidadeImpares;
    float impares[quantidade];
    float pares[quantidade];

    /*Solicitando e armazenando dados*/
    
    for (i = 0; i < quantidade; i++)
    {
        printf("Digite o %d� n�mero: ", i+1);
        scanf("%d", &numeros[i]);

        /*quantidadePares = numeros[i] % 2 == 0 ? quantidadePares++ : quantidadeImpares++;*/
        
        if (numeros[i] % 2 == 0)
        {
            quantidadePares++;
            pares[i] = numeros[i]; 
        }
        else
        {
            quantidadeImpares++;
            impares[i] = numeros[i]; 
        }
        
    }
    
    /*Exibindo dados*/

    system("cls || clear");

    printf("Total de n�meros: %d", quantidade);

    printf("N�meros Informados:\n");

    for  (i = 0; i < quantidade; i++)
    {
        printf("%d\n", numeros[i]);
    }
    
    printf("\nQuantidade de Pares: %.1f\n", quantidadePares);
    printf("\nQuantidade de �mpares: %.1f\n", quantidadeImpares);
    
    for (i = 0; i < quantidade; i++)
    {
    printf("\nPares: %.1f\n", pares[i]);
    printf("�mpares: %.1f\n", impares[i]);
    }
    

    return 0;
}