#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale (LC_ALL,"portuguese");   

    int i;
    int numero;
    int soma = 0;

    for ( i = 1; i <= 5 ; i++)
    {
        printf("\nDigite o %dº número: ",i);
        scanf("%d", &numero);

        soma += numero;
    }
    
    printf("\nSoma: %d\n", soma);
    return 0;

}