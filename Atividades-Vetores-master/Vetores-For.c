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
    int quantidadeNotas = 5;
    float notas[quantidadeNotas];

    /*Solicitando dados ao usuário*/

    for (i = 0; i < quantidadeNotas; i++)
    {
    printf("Digite a %dª nota: ", i+1);
    scanf("%f", &notas[i]);        
    }

    /*Exibindo as notas*/

    printf("\nMostrando notas:\n\n");
    
    for (i = 0; i < quantidadeNotas; i++)
    {
    printf("%dª Nota: %.1f pontos\n", i+1, notas[i]);
    }
    
    return 0;
}