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
    float maior = 0;
    float menor = 9999;

    /*Solicitando e armazenando dados*/
    
    for (i = 0; i < quantidade; i++)
    {
        printf("Digite o %dº número: ", i+1);
        scanf("%f", &numeros[i]);

        /*maior = numeros[i] > maior ? numeros[i] : maior;
        menor = numeros[i] < menor ? numeros[i] : menor;*/

        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }

        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
        
    }
    
    /*Exibindo dados*/

    system("cls || clear");

    printf("Números Informados:\n\n");

    for  (i = 0; i < quantidade; i++)
    {
        printf("%.1f\n", numeros[i]);
    }
    
    printf("\nMaior número: %.1f\n", maior);
    printf("Menor número: %.1f\n", menor);

    return 0;
}