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

    for (i = 0; i < quantidade; i++)
    {
        do
        {
            printf("\nDigite o %dº número: ", i + 1);
            scanf("%d", &numeros[i]);

            if (numeros[i] % 2 != 0 || numeros[i] < 0)
            {
                printf("\nNÚMERO INVÁLIDO! DIGITE UM NÚMERO PAR.\n");
            }

        } while (numeros[i] % 2 != 0 || numeros[i] < 0);
    }

    printf("\nNúmeros obtidos: \n");

    for (i = (quantidade - 1); i >= 0; i--)
    {
        printf("\n%d", numeros[i]);
    }

    printf("\n");

    return 0;
}