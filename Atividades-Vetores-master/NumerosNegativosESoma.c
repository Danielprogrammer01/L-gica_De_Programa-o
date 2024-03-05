#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int quantidade = 10;
    float numeros [quantidade];
    float somaPositivos = 0;
    int negativos = 0;
    int i;

    for (i = 0; i < quantidade; i++)
    {
        printf("Digite o %d número: ", i+1);
        scanf("%f", &numeros[i]);

        if (numeros[i] >= 0)
        {
            somaPositivos += numeros[i];
        }
        else
        {
            negativos++;
        }
    
    }
    
    printf("\nSoma dos números positivos: %.1f", somaPositivos);
    printf("\n\nQuantidade de números negativos: %d\n", negativos);

    return 0;

}