#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor = 10;

    printf("Valor inicial: %d \n", valor);

    valor++;
    printf("Valor c/ incremento: %d \n", valor);

    valor--;
    printf("Valor c/ decremento: %d \n", valor);

    valor += 5;
    printf("Valor c/ incremento de 5 unidades: %d \n", valor);

    valor -= 5;
    printf("Valor c/ decremento de 5 unidades: %d \n", valor);

    valor *= 5;
    printf("Valor multiplicado por 5: %d \n", valor);

    valor /= 5;
    printf("Valor dividido por 5: %d \n", valor);
}