#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale (LC_ALL,"portuguese");

    int numero = 0;
    int quantidadeDeNumeros;
    int soma;
    float media;

    do
    {
        printf("\nDigite o %dº valor: ", quantidadeDeNumeros+1);
        scanf("%d", &numero);

        if (numero >= 0)
        {
           quantidadeDeNumeros++;
        }

        soma += numero;

    } while ( numero >= 0);
    
    media = soma / quantidadeDeNumeros;

    printf("\nMédia: %.1f\n", media);

    return 0;
}