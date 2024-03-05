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
    int quantidadeNotas = 3;
    float notas[quantidadeNotas];
    float soma = 0;
    float media;
    char situacao[250];

    /*Solicitando dados ao usuário*/

    for (i = 0; i < quantidadeNotas; i++)
    {
    printf("Digite a %dª nota: ", i+1);
    scanf("%f", &notas[i]);        
    soma += notas[i];
    }

    system("cls || clear");

    /*Calculando a média*/

    media = soma/quantidadeNotas;

    /*Determinando a situação do aluno*/

    if (media >= 7)
    {
        strcpy(situacao, "Aprovado!");
    }
    else if (media >= 5)
    {
        strcpy(situacao, "Em recuperação!");
    }
    else
    {
        strcpy(situacao, "Reprovado!");
    }

    /*Exibindo resultados*/

    printf("Mostrando notas:\n\n");
    
    for (i = 0; i < quantidadeNotas; i++)
    {
    printf("%dª Nota: %.1f pontos\n", i+1, notas[i]);
    }
    
    printf("\nMédia: %.1f pontos\n", media);
    
    printf("\nSituação do Aluno: %s\n", situacao);


    

    return 0;
}