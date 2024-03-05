#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"portuguese");   

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("\nO número é PAR!");
    }
    else
    {
        printf("\nO número é ÍMPAR!");
    }

    return 0;    
}