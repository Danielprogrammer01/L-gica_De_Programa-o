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
    float numeros[quantidade];

    for (i = 0; i < quantidade; i++)
    {
        printf("Digite o %dº número: ", i+1);
        scanf("%f", &numeros[i]);


        if (numeros[i] < 0)
        {
            numeros[i] = 0.0;
        }
    }
    
    printf("\nNúmeros informados: \n");

    for (i = 0; i < quantidade; i++)
    {
        printf("\n%1.f", numeros[i]);
    }

    printf("\n");
    
    return 0;
}