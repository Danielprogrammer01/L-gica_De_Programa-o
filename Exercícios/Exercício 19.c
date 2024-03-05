#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale (LC_ALL,"portuguese");

    int i;
    int numero;
    int quantidadeDePares = 0;
    int quantidadeDeImpares = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("Digite o %d� n�mero: ", i);
        scanf("%d",&numero);


        // numero % 2 == 0 ? quantidadeDePares++ : quantidadeDeImpares++; (USANDO OPERADOR TERN�RIO)

        if (numero % 2 == 0)
        {
            quantidadeDePares++;
            // quantidadeDePares = quantidadeDePares + ;
            //quantidadeDePares++;
        }
        else
        {
            quantidadeDeImpares++;
        }
        
    }
    
    printf("\nN�meros Pares: %d", quantidadeDePares);
    printf("\nN�meros �mpares: %d\n", quantidadeDeImpares);


    return 0;
}